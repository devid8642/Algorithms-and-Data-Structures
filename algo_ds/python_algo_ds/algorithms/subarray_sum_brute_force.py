"""An algorithm to determine the max subarray sum of an array"""
import unittest


def find_max_subarray(array: list[int]) -> tuple[int, int, int]:
    max_sum = None
    ans = (0, 0, 0)

    for i in range(0, len(array)):
        sum = 0
        for j in range(i, len(array)):
            sum += array[j]

            if not max_sum:
                max_sum = sum
                ans = (i, j, sum)
            elif sum > max_sum:
                ans = (i, j, sum)
                max_sum = sum

    return ans


class TestBruteForceSubarraySum(unittest.TestCase):
    def test_find_max_subarray(self):
        self.assertEqual(find_max_subarray(
            [-2, -3, 4, -1, -2, 1, 5, -3]), (2, 6, 7))
        self.assertEqual(find_max_subarray([1, 2, 3]), (0, 2, 6))
        self.assertEqual(find_max_subarray([1, -2]), (0, 0, 1))


if __name__ == '__main__':
    unittest.main()
