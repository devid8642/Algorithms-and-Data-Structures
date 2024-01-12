# Problem: https://leetcode.com/problems/move-zeroes/


'''Good solution without two pointers

class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        cont = 0
        pos = []

        for i in range(len(nums)):
            if nums[i] == 0:
                cont += 1
                pos.append(i)

        decrement = 0
        for p in pos:
            nums.pop(p - decrement)
            decrement += 1

        for _ in range(cont):
            nums.append(0)

'''


class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        j = 0
        for i in range(len(nums)):
            if nums[i] != 0 and nums[j] == 0:
                nums[i], nums[j] = nums[j], nums[i]

            if nums[j] != 0:
                j += 1
