# Problem: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/


class Solution:
    def replaceElements(self, arr: list[int]) -> list[int]:
        max_numbers = []

        for i in range(len(arr)):
            if i == len(arr) - 1:
                arr[i] = -1
            else:
                if len(max_numbers) == 0 or arr[i] >= max_numbers[-1]:
                    max_numbers.append(max(arr[i + 1:]))
                arr[i] = max_numbers[-1]

        return arr
