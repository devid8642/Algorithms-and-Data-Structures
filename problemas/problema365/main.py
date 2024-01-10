# Problem: https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3238/
from itertools import groupby


class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        answer = 0
        for k, g in groupby(nums):
            group_length = len(list(g))
            if k == 1 and group_length > answer:
                answer = group_length
        return answer
