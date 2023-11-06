""" Tests for circular linked list """
import unittest
from linked_list.test_linked_list import TestLinkedList
from .circular_linked_list import CircularLinkedList


class TestCircularLinkedList(TestLinkedList):
    def setUp(self) -> None:
        self.lst = CircularLinkedList()

        for c in range(10):
            self.lst.append(c)

    def test_append_lst(self) -> None:
        old_len = len(self.lst)
        old_last = self.lst._get_node(len(self.lst) - 1)
        self.lst.append(10)

        self.assertEqual(self.lst[10], 10)
        self.assertEqual(len(self.lst), old_len + 1)
        self.assertEqual(
            old_last.next,
            self.lst._get_node(len(self.lst) - 1)
        )
        self.assertEqual(
            self.lst._get_node(len(self.lst) - 1).next,
            self.lst._get_node(0)
        )

    def test_disappend_lst(self) -> None:
        old_len = len(self.lst)
        expected_last = self.lst._get_node(len(self.lst) - 2)
        self.lst.disappend()

        self.assertNotEqual(self.lst.get_last(), 9)
        self.assertEqual(
            self.lst._get_node(len(self.lst) - 1),
            expected_last
        )
        self.assertEqual(
            expected_last.next,
            self.lst._get_node(0)
        )
        self.assertEqual(len(self.lst), old_len - 1)


if __name__ == '__main__':
    unittest.main()
