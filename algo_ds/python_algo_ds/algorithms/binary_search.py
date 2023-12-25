"""Binary Search implementation"""
from __future__ import annotations

import unittest
from typing import Any

from utils.test_search import TestSearchAlgorithms
from utils.type_comparable import TypeComparable


def binary_search(
    sorted_collection: list[TypeComparable], value: Any
) -> int | None:
    if sorted_collection != sorted(sorted_collection):
        raise ValueError('sorted_collection must be sorted in ascending order')

    left = 0
    right = len(sorted_collection) - 1

    while left <= right:
        mid = (left + right) // 2
        if sorted_collection[mid] == value:
            return mid
        elif sorted_collection[mid] > value:
            right = mid - 1
        else:
            left = mid + 1

    return None


class TestBinarySearch(TestSearchAlgorithms):
    def setUp(self) -> None:
        super().setUp()
        self.arr = sorted(self.arr)
        self.search_algorithm = binary_search

    def test_with_an_unsorted_collection(self) -> None:
        with self.assertRaises(ValueError):
            self.search_algorithm([45, 2, 12, 56], 5)


if __name__ == '__main__':
    unittest.main()
