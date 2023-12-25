"""An algorithm to determine the max subarray sum of an array"""
import unittest


def find_max_crossing_subarray(
    array: list[int], low: int, mid: int, high: int
) -> tuple:
    left_sum = float('-inf')
    sum = 0
    max_left = 0

    for i in range(mid, low - 1, -1):
        sum += array[i]
        if sum > left_sum:
            left_sum = sum
            max_left = i

    right_sum = float('-inf')
    sum = 0
    max_right = 0

    for i in range(mid + 1, high + 1):
        sum += array[i]
        if sum > right_sum:
            right_sum = sum
            max_right = i

    return (max_left, max_right, left_sum + right_sum)


def find_max_subarray(
    array: list[int], low: int, high: int
) -> tuple[int, int, int]:
    if low == high:
        return (low, high, array[low])

    mid = (low + high) // 2
    left_low, left_high, left_sum = find_max_subarray(array, low, mid)
    right_low, right_high, right_sum = find_max_subarray(array, mid + 1, high)
    mid_low, mid_high, mid_sum = find_max_crossing_subarray(
        array, low, mid, high
    )

    if left_sum >= right_sum and left_sum >= mid_sum:
        return (left_low, left_high, left_sum)
    elif right_sum >= left_sum and right_sum >= mid_sum:
        return (right_low, right_high, right_sum)

    return (mid_low, mid_high, mid_sum)


class TestMaxSubarraySum(unittest.TestCase):
    def test_max_subarray(self) -> None:
        self.assertEqual(
            find_max_subarray([-2, -3, 4, -1, -2, 1, 5, -3], 0, 7), (2, 6, 7)
        )
        self.assertEqual(find_max_subarray([1, 2, 3], 0, 2), (0, 2, 6))
        self.assertEqual(find_max_subarray([1, -2], 0, 1), (0, 0, 1))


if __name__ == '__main__':
    unittest.main()
