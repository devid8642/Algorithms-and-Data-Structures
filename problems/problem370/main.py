# Problem: https://leetcode.com/problems/remove-element/


'''Simple Solution but slow

class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        cont = nums.count(val)

        for _ in range(cont):
            nums.remove(val)

        return len(nums)

'''

'''Simple solution with two pointers

class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        cont = 0

        for i in range(len(nums)):
            if nums[i] == val:
                for j in range(i, len(nums) - 1):
                    nums[j] = nums[j + 1]
                cont += 1

        return cont

'''


class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        # 34 ms really fast
        pos_to_remove = []

        for i in range(len(nums)):
            if nums[i] == val:
                pos_to_remove.append(i)

        cont = 0
        for pos in pos_to_remove:
            nums.pop(pos - cont)
            cont += 1

        return len(nums)
