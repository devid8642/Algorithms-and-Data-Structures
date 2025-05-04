# Problem: https://leetcode.com/problems/third-maximum-number/description/


class Solution:
    def thirdMax(self, nums: list[int]) -> int:
        nums = sorted(set(nums), reverse=True)  # type: ignore

        if len(nums) == 1 or len(nums) == 2:
            return nums[0]

        return nums[2]
