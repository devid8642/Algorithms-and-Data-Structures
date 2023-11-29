""" Two pointers implementation """
from __future__ import annotations
import unittest


def two_pointers(sorted_collection: list[int], target_sum: int) -> tuple[int, int] | None:
    left = 0
    right = len(sorted_collection) - 1

    while left < right:
        addition = sorted_collection[left] + sorted_collection[right]
        if addition == target_sum:
            return left, right
        elif addition < target_sum:
            left += 1
        else:
            right -= 1

    return None


class TestTwoPointers(unittest.TestCase):
    def setUp(self) -> None:
        self.arr = [-43, -33, -17, 5, 9, 13, 28, 32, 38, 48]

    def test_with_existing_sum(self) -> None:
        self.assertTupleEqual(two_pointers(self.arr, 14), (3, 4))

    def test_with_not_existing_sum(self) -> None:
        self.assertEqual(two_pointers(self.arr, 0), None)


if __name__ == '__main__':
    unittest.main()
