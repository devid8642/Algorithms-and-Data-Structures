# Problem: https://leetcode.com/explore/learn/card/fun-with-arrays/525/inserting-items-into-an-array/3245/


class Solution:
    def duplicateZeros(self, arr: list[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        pos_to_add_zero = []
        length = len(arr)

        for i in range(len(arr)):
            if arr[i] == 0:
                pos_to_add_zero.append(i + 1)

        cont = 0
        for pos in pos_to_add_zero:
            arr.insert(pos + cont, 0)
            cont += 1

        for i in range(len(arr) - 1, -1, -1):
            if len(arr) == length:
                break
            del arr[i]
