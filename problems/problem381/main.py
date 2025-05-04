# Problem: https://leetcode.com/problems/add-two-numbers

from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def mount_decimal_number(l: ListNode) -> int:
    result = 0
    multiplier = 1
    while l:
        result += l.val * multiplier
        multiplier *= 10
        l = l.next
    return result


class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        num1 = mount_decimal_number(l1)
        num2 = mount_decimal_number(l2)
        sum_result = num1 + num2

        head = current = ListNode(int(str(sum_result)[-1]))
        for digit in reversed(str(sum_result)[:-1]):
            current.next = ListNode(int(digit))
            current = current.next
        return head
