""" Tests for linked list implementation """
from __future__ import annotations
from .linked_list import LinkedList
import unittest


class TestLinkedList(unittest.TestCase):
    def setUp(self) -> None:
        self.lst = LinkedList()

        for c in range(10):
            self.lst.append(c)

    def test_print_lst(self) -> None:
        self.assertEqual(
            self.lst.__str__(),
            ' -> '.join(str(item) for item in self.lst)
        )

    def test_len_lst(self) -> None:
        self.assertEqual(len(self.lst), 10)

    def test_is_empty_lst(self) -> None:
        lst = LinkedList()

        self.assertFalse(self.lst.is_empty())
        self.assertTrue(lst.is_empty())

    def test_get_item_lst(self) -> None:
        self.assertEqual(self.lst[0], 0)
        self.assertEqual(self.lst[9], 9)

        with self.assertRaises(IndexError):
            self.assertEqual(self.lst[10], 10)

    def test_set_item_lst(self) -> None:
        self.lst[0] = -1

        self.assertEqual(self.lst[0], -1)

        with self.assertRaises(IndexError):
            self.lst[10] = 10
            self.assertEqual(self.lst[10], 10)

    def test_get_head_and_last_lst(self) -> None:
        self.assertEqual(self.lst.get_head(), 0)
        self.assertEqual(self.lst.get_last(), 9)

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

    def test_insert_lst(self) -> None:
        previous_new_node = self.lst._get_node(1)
        expected_next = self.lst._get_node(2)
        old_len = len(self.lst)
        self.lst.insert(2.5, 2)

        self.assertEqual(self.lst[2], 2.5)
        self.assertEqual(previous_new_node.next, self.lst._get_node(2))
        self.assertEqual(self.lst._get_node(2).next, expected_next)
        self.assertEqual(len(self.lst), old_len + 1)

        with self.assertRaises(IndexError):
            self.lst.insert(3, 11)

    def test_delete_lst(self) -> None:
        old_len = len(self.lst)
        previous_deleted_node = self.lst._get_node(4)
        expected_next_node = self.lst._get_node(6)
        self.lst.delete(5)

        self.assertNotEqual(self.lst[5], 5)
        self.assertEqual(
            previous_deleted_node.next,
            expected_next_node
        )
        self.assertEqual(len(self.lst), old_len - 1)

        with self.assertRaises(IndexError):
            self.lst.delete(11)

    def test_search_lst(self) -> None:
        self.assertEqual(self.lst.search(0), 0)
        self.assertEqual(self.lst.search(10), None)


if __name__ == '__main__':
    unittest.main()
