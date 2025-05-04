# Problem: https://leetcode.com/problems/middle-of-the-linked-list/description/

class ListNode:
    def __init__(self, val=0, next=None):
        self.val: int = val
        self.next: ListNode | None = next


'''Simple Solution

nodes = []
aux = head

while (aux != None):
    nodes.append(aux)
    aux = aux.next

return nodes[len(nodes) // 2]

'''


class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        slow = fast = head

        while (fast != None and fast.next != None):
            slow = slow.next
            fast = fast.next.next

        return slow
