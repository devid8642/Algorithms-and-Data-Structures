# Problem: https://leetcode.com/problems/running-sum-of-1d-array/
from itertools import accumulate as acc

'''Manual solution

prefix = [nums[0]]

for i in range(1, len(nums)):
    prefix[i] = prefix[i - 1] + nums[i]

return prefix

'''


class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        return list(acc(nums))
