# Problem: https://leetcode.com/problems/height-checker/description/


class Solution:
    def heightChecker(self, heights: list[int]) -> int:
        heights_sorted = sorted(heights)
        cont = 0

        for i in range(len(heights)):
            if heights[i] != heights_sorted[i]:
                cont += 1

        return cont
