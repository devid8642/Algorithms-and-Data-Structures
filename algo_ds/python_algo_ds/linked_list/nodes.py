""" Implementation of a nodes for different types of linked list """
from __future__ import annotations
from typing import Any


class Node:
    def __init__(self, data: Any) -> None:
        self.data: Any = data
        self.next: Node | None = None

    def __str__(self) -> str:
        return f'{self.data}'
