"""Implementation of a queue"""
from __future__ import annotations

from collections.abc import Iterable
from typing import Any

from data_structures.linked_list.linked_list import Node


class Queue:
    def __init__(self) -> None:
        self._first: Node | None = None
        self._last: Node | None = None
        self._len: int = 0

    def __iter__(self) -> Iterable:
        current = self._first

        while current:
            yield current.data
            current = current.next

    def __str__(self) -> str:
        return ' -> '.join(str(item) for item in self)

    def __len__(self) -> int:
        return self._len

    def _get_first(self) -> Node:
        return self._first

    def _get_last(self) -> Node:
        return self._last

    def is_empty(self) -> bool:
        return len(self) == 0

    def get(self) -> Any:
        if not self.is_empty():
            return self._first.data
        return None

    def put(self, value: Any) -> None:
        new_node = Node(value)

        if self.is_empty():
            self._first = self._last = new_node
        else:
            self._last.next = new_node
            self._last = new_node

        self._len += 1

    def remove(self) -> Any:
        if not self.is_empty():
            node = self._first
            self._first = self._first.next
            self._len -= 1
            return node.data
        return None
