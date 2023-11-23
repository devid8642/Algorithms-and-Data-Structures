""" Merge sort implementation """
from __future__ import annotations
from typing import Any
from utils.test_sort import TestSortAlgorithms
import unittest


def merge(arr1: list[Any], arr2: list[Any]) -> list[Any]:
    new_arr = []

    while arr1 and arr2:
        if arr1[0] < arr2[0]:
            new_arr.append(arr1.pop(0))
        else:
            new_arr.append(arr2.pop(0))

    new_arr.extend(arr1)
    new_arr.extend(arr2)
    return new_arr


def merge_sort(arr: list[Any]) -> list[Any]:
    if len(arr) <= 1:
        return arr
    mid_index = len(arr) // 2
    return merge(merge_sort(arr[:mid_index]), merge_sort(arr[mid_index:]))


class TestMergeSort(TestSortAlgorithms):
    def setUp(self) -> None:
        self.sort_function = merge_sort


if __name__ == '__main__':
    unittest.main()
