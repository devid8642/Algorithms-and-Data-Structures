# Problem: https://leetcode.com/problems/remove-element/


class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        cont = nums.count(val)

        for _ in range(cont):
            nums.remove(val)

        return len(nums)
