""" Implementation of a linear search """
from __future__ import annotations
from typing import Any
import unittest


def linear_search(arr: list[Any], target: Any) -> int | None:
    for index, item in enumerate(arr):
        if item == target:
            return index
    return None


class TestLinearSearch(unittest.TestCase):
    def setUp(self) -> None:
        self.arr = [31, 41, 59, 26, 41, 58]

    def test_with_an_existing_element(self) -> None:
        self.assertEqual(linear_search(self.arr, 59), 2)

    def test_with_an_not_existing_element(self) -> None:
        self.assertEqual(linear_search(self.arr, 10), None)


if __name__ == '__main__':
    unittest.main()
