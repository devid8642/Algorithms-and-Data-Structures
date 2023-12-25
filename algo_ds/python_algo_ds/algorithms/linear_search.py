"""Implementation of a linear search"""
from __future__ import annotations

import unittest
from typing import Any

from utils.test_search import TestSearchAlgorithms


def linear_search(arr: list[Any], target: Any) -> int | None:
    for index, item in enumerate(arr):
        if item == target:
            return index
    return None


class TestLinearSearch(TestSearchAlgorithms):
    def setUp(self) -> None:
        super().setUp()
        self.search_algorithm = linear_search


if __name__ == '__main__':
    unittest.main()
