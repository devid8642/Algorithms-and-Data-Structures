"""Generic type comparable for lists"""
from __future__ import annotations

from typing import Any, Protocol, TypeVar


class Comparable(Protocol):
    def __lt__(self, other: Any) -> bool:
        ...


TypeComparable = TypeVar('TypeComparable', bound=Comparable)
