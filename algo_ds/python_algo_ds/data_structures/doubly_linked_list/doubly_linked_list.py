""" Implementation of a doubly linked list """
from __future__ import annotations
from typing import Any
from collections.abc import Iterable
from data_structures.linked_list.linked_list import Node


class DoublyNode(Node):
    def __int__(self, data: Any) -> None:
        super().__init__(data)
        self.previous: Node | None = None


class DoublyLinkedList:
    def __init__(self) -> None:
        self._head: DoublyNode | None = None
        self._last: DoublyNode | None = None
        self._len: int = 0

    def __iter__(self) -> Iterable:
        current = self._head

        while current:
            yield current.data
            current = current.next

    def __str__(self) -> str:
        return ' <-> '.join(str(item) for item in self)

    def __len__(self) -> int:
        return self._len

    def _validate_index(self, index: int) -> None:
        if not 0 <= index < len(self):
            raise IndexError('list index out of range')

    def _get_node(self, index: int) -> DoublyNode:
        self._validate_index(index)
        if index == 0:
            return self._head
        elif index == len(self) - 1:
            return self._last
        current = self._head

        for _ in range(index):
            current = current.next

        return current

    def __getitem__(self, index: int) -> Any:
        return self._get_node(index).data

    def __setitem__(self, index: int, value: Any) -> None:
        node = self._get_node(index)
        node.data = value

    def is_empty(self) -> bool:
        return len(self) == 0

    def get_head(self) -> Any:
        return self._head.data

    def get_last(self) -> Any:
        return self._last.data

    def append(self, value: Any) -> None:
        new_node = DoublyNode(value)

        if not self._head:
            self._head = self._last = new_node
        else:
            self._last.next = new_node
            new_node.previous = self._last
            self._last = new_node

        self._len += 1

    def insert(self, value: Any, index: int) -> None:
        self._validate_index(index)
        new_node = DoublyNode(value)

        if not self._head:
            self.append(value)
        elif index == 0:
            self._head.previous = new_node
            new_node.next = self._head
            self._head = new_node
        elif index == len(self) - 1:
            self.append(value)
        else:
            previous_new_node = self._get_node(index - 1)
            new_node.next = previous_new_node.next
            new_node.previous = previous_new_node
            previous_new_node.next = new_node

        self._len += 1

    def delete(self, index: int) -> None:
        self._validate_index(index)

        if len(self) == 1:
            self._head = self._last = None
        elif index == 0:
            self._head = self._head.next
            self._head.previous = None
        elif index == len(self) - 1:
            self._last = self._last.previous
            self._last.next = None
        else:
            to_delete = self._get_node(index)
            to_delete.previous.next = to_delete.next
            to_delete.next.previous = to_delete.previous

        self._len -= 1

    def search(self, value: Any) -> int | None:
        current = self._head
        pos = 0

        while current:
            if current.data == value:
                return pos
            current = current.next
            pos += 1

        return None
