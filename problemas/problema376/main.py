# Problem: https://leetcode.com/problems/sort-array-by-parity/


'''Good solution without two pointers

class Solution:
    def sortArrayByParity(self, nums: list[int]) -> list[int]:
        answer = []
        even_numbers = []

        for i in range(len(nums)):
            if nums[i] % 2 == 0:
                even_numbers.append((nums[i], i))

        decrement = 0
        for num in even_numbers:
            answer.append(num[0])
            nums.pop(num[1] - decrement)
            decrement += 1

        answer.extend(nums)

        return answer

'''


class Solution:
    def sortArrayByParity(self, nums: list[int]) -> list[int]:
        j = 0

        for i in range(len(nums)):
            if nums[i] % 2 == 0 and nums[j] % 2 != 0:
                nums[i], nums[j] = nums[j], nums[i]

            if nums[j] % 2 == 0:
                j += 1

        return nums
