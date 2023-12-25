"""Implementation of a circular linked list"""
from __future__ import annotations

from collections.abc import Iterable
from typing import Any

from data_structures.linked_list.linked_list import LinkedList, Node


class CircularLinkedList(LinkedList):
    def __iter__(self) -> Iterable:
        current = self._head

        while current:
            yield current.data
            current = current.next
            if current == self._head:
                break

    def append(self, value: Any) -> None:
        new_node = Node(value)

        if not self._head:
            self._head = self._last = new_node
            self._last.next = self._head
        else:
            self._last.next = new_node
            self._last = new_node
            self._last.next = self._head

        self._len += 1

    def disappend(self) -> None:
        self._last = self._get_node(len(self) - 2)
        self._last.next = self._head
        self._len -= 1

    def search(self, value: Any) -> int | None:
        current = self._head
        pos = 0

        while current:
            if current.data == value:
                return pos
            current = current.next
            pos += 1
            if current == self._head:
                break

        return None
