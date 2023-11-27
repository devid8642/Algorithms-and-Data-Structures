""" Implementation of insertion sort https://en.wikipedia.org/wiki/Insertion_sort """
from __future__ import annotations
from typing import Any
from utils.test_sort import TestSortAlgorithms
from utils.type_comparable import TypeComparable
import unittest


def insertion_sort(arr: list[TypeComparable]) -> list[TypeComparable]:
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr


class TestInsertionSort(TestSortAlgorithms):
    def setUp(self) -> None:
        self.sort_function = insertion_sort


if __name__ == '__main__':
    unittest.main()
