"""Tests for stack implementation"""
import unittest

from .stack import Stack


class TestStack(unittest.TestCase):
    def setUp(self) -> None:
        self.stack = Stack()

        for c in range(10):
            self.stack.push(c)

    def test_print_stack(self) -> None:
        self.assertEqual(
            self.stack.__str__(), '\n'.join(str(item) for item in self.stack)
        )

    def test_len_stack(self) -> None:
        self.assertEqual(len(self.stack), 10)

    def test_is_empty_stack(self) -> None:
        stk = Stack()

        self.assertFalse(self.stack.is_empty())
        self.assertTrue(stk.is_empty())

    def test_peek_stack(self) -> None:
        empty_stack = Stack()

        self.assertEqual(self.stack.peek(), 9)
        self.assertEqual(empty_stack.peek(), None)

    def test_push_stack(self) -> None:
        old_len = len(self.stack)
        old_top = self.stack._get_top()
        self.stack.push(10)

        self.assertEqual(self.stack.peek(), 10)
        self.assertEqual(self.stack._get_top().next, old_top)
        self.assertEqual(len(self.stack), old_len + 1)

    def test_pop_stack(self) -> None:
        empty_stack = Stack()
        old_top = self.stack._get_top()
        old_len = len(self.stack)
        returned_data = self.stack.pop()

        self.assertNotEqual(self.stack.peek(), old_top.data)
        self.assertEqual(self.stack._get_top(), old_top.next)
        self.assertEqual(returned_data, old_top.data)
        self.assertEqual(len(self.stack), old_len - 1)

        self.assertEqual(empty_stack.pop(), None)


if __name__ == '__main__':
    unittest.main()
