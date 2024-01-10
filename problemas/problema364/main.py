# Problem: https://leetcode.com/problems/ransom-note/
from collections import Counter


class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        # 47 ms
        ransomNote_hashmap = Counter(ransomNote)
        magazine_hashmap = Counter(magazine)

        for letter in ransomNote_hashmap:
            if ransomNote_hashmap[letter] > magazine_hashmap[letter]:
                return False

        return True


'''Simple solution (155 ms)

class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        for letter in ransomNote:
            if ransomNote.count(letter) > magazine.count(letter):
                return False
        return True

'''

'''Solution with dict (39 ms)

class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        hashmap = {}

        for letter in ransomNote:
            if letter in hashmap.keys():
                hashmap[letter] += 1
            else:
                hashmap[letter] = 1

        for letter in hashmap.keys():
            if hashmap[letter] > magazine.count(letter):
                return False

        return True

'''
