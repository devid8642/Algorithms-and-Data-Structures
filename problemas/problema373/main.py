# Problem: https://leetcode.com/problems/valid-mountain-array/


class Solution:
    def validMountainArray(self, arr: list[int]) -> bool:
        if len(arr) < 3:
            return False

        i = 0
        while i < len(arr) - 1 and arr[i] < arr[i + 1]:
            i += 1

        j = len(arr) - 1
        while j > 0 and arr[j] < arr[j - 1]:
            j -= 1

        if i != len(arr) - 1 and j != 0:
            return i == j

        return False
