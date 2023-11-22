""" Tests for queue implementation """
import unittest
from .queue import Queue


class TestQueue(unittest.TestCase):
    def setUp(self) -> None:
        self.q = Queue()

        for c in range(10):
            self.q.put(c)

    def test_print_q(self) -> None:
        self.assertEqual(
            self.q.__str__(),
            ' -> '.join(str(item) for item in self.q)
        )

    def test_len_q(self) -> None:
        self.assertEqual(len(self.q), 10)

    def test_get_first_last_q(self) -> None:
        self.assertEqual(self.q._get_first().data, 0)
        self.assertEqual(self.q._get_last().data, 9)

    def test_is_empty_q(self) -> None:
        q = Queue()

        self.assertTrue(q.is_empty())
        self.assertFalse(self.q.is_empty())

    def test_get_q(self) -> None:
        empty_q = Queue()

        self.assertEqual(self.q.get(), 0)
        self.assertEqual(empty_q.get(), None)

    def test_put_q(self) -> None:
        old_len = len(self.q)
        old_last = self.q._get_last()
        self.q.put(10)

        self.assertEqual(self.q._get_last().data, 10)
        self.assertEqual(
            old_last.next,
            self.q._get_last()
        )
        self.assertEqual(len(self.q), old_len + 1)

    def test_remove_q(self) -> None:
        empty_q = Queue()
        old_first = self.q._get_first()
        old_len = len(self.q)
        returned_data = self.q.remove()

        self.assertNotEqual(self.q.get(), old_first.data)
        self.assertEqual(
            old_first.next,
            self.q._get_first()
        )
        self.assertEqual(old_first.data, returned_data)
        self.assertEqual(len(self.q), old_len - 1)

        self.assertEqual(empty_q.remove(), None)


if __name__ == '__main__':
    unittest.main()
