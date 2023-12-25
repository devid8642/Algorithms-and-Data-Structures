"""Tests for search algorithms"""
import unittest
from typing import Any


def generic_search_algorithm(array: list[Any], value: Any) -> int | None:
    try:
        index = array.index(value)
    except ValueError:
        return None
    return index


class TestSearchAlgorithms(unittest.TestCase):
    def setUp(self) -> None:
        self.arr = [31, 41, 59, 26, 41, 58]
        self.search_algorithm = generic_search_algorithm

    def test_with_an_existing_element(self) -> None:
        self.assertEqual(
            self.search_algorithm(self.arr, 41), self.arr.index(41)
        )
        self.assertEqual(
            self.search_algorithm(self.arr, 59), self.arr.index(59)
        )
        self.assertEqual(
            self.search_algorithm(self.arr, 26), self.arr.index(26)
        )

    def test_with_an_not_existing_element(self) -> None:
        self.assertEqual(self.search_algorithm(self.arr, 10), None)


if __name__ == '__main__':
    unittest.main()
