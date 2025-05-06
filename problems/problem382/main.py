# Problem: https://leetcode.com/problems/number-of-equivalent-domino-pairs/


class Solution:
    def numEquivDominoPairs(self, dominoes: list[list[int]]) -> int:
        hash = {}
        total = 0

        for a, b in dominoes:
            key = tuple(sorted((a, b)))

            if key in hash:
                total += hash[key]
                hash[key] += 1
            else:
                hash[key] = 1

        return total
