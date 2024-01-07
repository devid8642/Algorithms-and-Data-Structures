# Problem: https://leetcode.com/problems/richest-customer-wealth/description/

'''Manual Solution
maximum = 0

for client in accounts:
    _sum = 0

    for money in client:
        _sum += money
            
    if _sum > maximum:
        maximum = _sum
        
return maximum
'''


class Solution:
    def maximumWealth(self, accounts: list[list[int]]) -> int:
        maximum = 0

        for account in accounts:
            maximum = max(sum(account), maximum)

        return maximum
