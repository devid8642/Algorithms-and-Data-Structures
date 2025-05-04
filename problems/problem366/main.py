# Problem: https://leetcode.com/explore/learn/card/fun-with-arrays/521/introduction/3237/


class Solution:
    def findNumbers(self, nums: list[int]) -> int:
        answer = 0
        for num in nums:
            if len(str(num)) % 2 == 0:
                answer += 1
        return answer
