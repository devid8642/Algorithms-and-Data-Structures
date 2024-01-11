# Problem: https://leetcode.com/problems/merge-sorted-array/description/


class Solution:
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        aux = nums1[0:m]
        pos = 0

        while len(aux) > 0 and len(nums2) > 0:
            if aux[0] < nums2[0]:
                nums1[pos] = aux[0]
                pos += 1
                aux.pop(0)
            else:
                nums1[pos] = nums2[0]
                pos += 1
                nums2.pop(0)

        for i in range(len(aux)):
            nums1[pos] = aux[i]
            pos += 1

        for i in range(len(nums2)):
            nums1[pos] = nums2[i]
            pos += 1
