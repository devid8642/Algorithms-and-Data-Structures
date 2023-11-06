""" Tests for doubly linked list implementation """
import unittest
from ..doubly_linked_list import DoublyLinkedList


class TestDoublyLinkedList(unittest.TestCase):
    def setUp(self) -> None:
        self.lst = DoublyLinkedList()

        for c in range(10):
            self.lst.append(c)

    def test_print_lst(self) -> None:
        self.assertEqual(
            self.lst.__str__(),
            ' <-> '.join(str(item) for item in self.lst)
        )

    def test_len_lst(self) -> None:
        self.assertEqual(len(self.lst), 10)

    def test_get_item_lst(self) -> None:
        self.assertEqual(self.lst[0], 0)

        with self.assertRaises(IndexError):
            self.assertEqual(self.lst[10], 10)

    def test_set_item_lst(self) -> None:
        self.lst[0] = -1

        self.assertEqual(self.lst[0], -1)

        with self.assertRaises(IndexError):
            self.lst[10] = 10

    def test_is_empty_lst(self) -> None:
        lst = DoublyLinkedList()

        self.assertTrue(lst.is_empty())
        self.assertFalse(self.lst.is_empty())

    def test_get_head_and_last_lst(self) -> None:
        self.assertEqual(self.lst.get_head(), 0)
        self.assertEqual(self.lst.get_last(), 9)

    def test_append_lst(self) -> None:
        old_last = self.lst._get_node(len(self.lst) - 1)
        old_len = len(self.lst)
        lst = DoublyLinkedList()
        lst.append(1)
        self.lst.append(10)

        self.assertEqual(lst[0], 1)
        self.assertEqual(self.lst[10], 10)
        self.assertEqual(
            old_last.next,
            self.lst._get_node(len(self.lst) - 1)
        )
        self.assertEqual(len(self.lst), old_len + 1)

    def test_insert_lst(self) -> None:
        old_len = len(self.lst)
        expected_previous = self.lst._get_node(1)
        expected_next = self.lst._get_node(2)
        self.lst.insert(2.5, 2)
        new_node = self.lst._get_node(2)

        self.assertEqual(self.lst[2], 2.5)
        self.assertEqual(new_node.previous, expected_previous)
        self.assertEqual(new_node.next, expected_next)
        self.assertEqual(len(self.lst), old_len + 1)

        with self.assertRaises(IndexError):
            self.lst.insert(10, 11)

    def test_delete_lst(self) -> None:
        old_len = len(self.lst)
        deleted_node_previous = self.lst._get_node(4)
        deleted_node_next = self.lst._get_node(6)
        self.lst.delete(5)

        self.assertNotEqual(self.lst[5], 5)
        self.assertEqual(
            deleted_node_previous.next,
            deleted_node_next
        )
        self.assertEqual(
            deleted_node_next.previous,
            deleted_node_previous
        )
        self.assertEqual(len(self.lst), old_len - 1)

        with self.assertRaises(IndexError):
            self.lst.delete(11)

    def test_search_lst(self) -> None:
        self.assertEqual(self.lst.search(5), 5)
        self.assertEqual(self.lst.search(10), None)


if __name__ == '__main__':
    unittest.main()
