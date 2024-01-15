# Problem: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/


class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
        n = len(nums)
        nums = set(nums)  # type: ignore
        total_nums = set()

        for i in range(1, n + 1):
            total_nums.add(i)

        return list(total_nums.difference(nums))
