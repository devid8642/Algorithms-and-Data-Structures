"""Implementation of a stack"""
from __future__ import annotations

from collections.abc import Iterable
from typing import Any

from data_structures.linked_list.linked_list import Node


class Stack:
    def __init__(self) -> None:
        self._top: Node | None = None
        self._len: int = 0

    def __iter__(self) -> Iterable:
        current = self._top

        while current:
            yield current.data
            current = current.next

    def __str__(self) -> str:
        return '\n'.join(str(item) for item in self)

    def __len__(self) -> int:
        return self._len

    def _get_top(self) -> Node:
        return self._top

    def is_empty(self) -> bool:
        return len(self) == 0

    def push(self, value: Any) -> None:
        new_node = Node(value)
        new_node.next = self._top
        self._top = new_node
        self._len += 1

    def pop(self) -> Any:
        if not self.is_empty():
            node = self._top
            self._top = self._top.next
            self._len -= 1
            return node.data
        return None

    def peek(self) -> Any:
        if not self.is_empty():
            return self._top.data
        return None
