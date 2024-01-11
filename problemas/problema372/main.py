# Problem: https://leetcode.com/problems/check-if-n-and-its-double-exist/


class Solution:
    def checkIfExist(self, arr: list[int]) -> bool:
        arr.sort()

        for i in range(len(arr)):
            l, r = 0, len(arr) - 1
            prod = 2 * arr[i]

            while l <= r:
                mid = (l + r) // 2

                if mid != i and arr[mid] == prod:
                    return True
                elif arr[mid] > prod:
                    r = mid - 1
                else:
                    l = mid + 1

        return False
