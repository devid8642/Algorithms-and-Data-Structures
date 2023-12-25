"""Merge sort implementation"""
from __future__ import annotations

import unittest

from algorithms.utils.test_sort import TestSortAlgorithms
from algorithms.utils.type_comparable import TypeComparable


def merge(
    arr1: list[TypeComparable], arr2: list[TypeComparable]
) -> list[TypeComparable]:
    new_arr = []

    while arr1 and arr2:
        if arr1[0] < arr2[0]:
            new_arr.append(arr1.pop(0))
        else:
            new_arr.append(arr2.pop(0))

    new_arr.extend(arr1)
    new_arr.extend(arr2)
    return new_arr


def merge_sort(arr: list[TypeComparable]) -> list[TypeComparable]:
    if len(arr) <= 1:
        return arr
    mid_index = len(arr) // 2
    return merge(merge_sort(arr[:mid_index]), merge_sort(arr[mid_index:]))


class TestMergeSort(TestSortAlgorithms):
    def setUp(self) -> None:
        self.sort_function = merge_sort


if __name__ == '__main__':
    unittest.main()
