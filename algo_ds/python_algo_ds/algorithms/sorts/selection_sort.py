""" Selection sort implementation """
from __future__ import annotations
from typing import Any
from algorithms.utils.test_sort import TestSortAlgorithms
from algorithms.utils.type_comparable import TypeComparable
import unittest


def selection_sort(arr: list[TypeComparable]) -> list[TypeComparable]:
    for i in range(0, len(arr) - 1):
        pos_minor = i

        for j in range(i + 1, len(arr)):
            if arr[j] < arr[pos_minor]:
                pos_minor = j

        arr[i], arr[pos_minor] = arr[pos_minor], arr[i]

    return arr


class TestSelectionSort(TestSortAlgorithms):
    def setUp(self) -> None:
        self.sort_function = selection_sort


if __name__ == '__main__':
    unittest.main()
