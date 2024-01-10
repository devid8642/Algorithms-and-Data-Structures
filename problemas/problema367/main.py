# Problem: https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3240/


class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        answer = []

        for num in nums:
            answer.append(num ** 2)

        return sorted(answer)
