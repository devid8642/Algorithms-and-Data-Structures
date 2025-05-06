# Problem: https://leetcode.com/problems/build-array-from-permutation/


class Solution:
    def buildArray(self, nums: list[int]) -> list[int]:
        ans = []
        for position in range(0, len(nums)):
            ans.append(nums[nums[position]])
        return ans

