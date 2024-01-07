# Problem: https://leetcode.com/problems/fizz-buzz/


class Solution:
    def fizzBuzz(self, n: int) -> list[str]:
        answer = []

        for i in range(1, n + 1):
            if i % 5 == 0 and i % 3 == 0:
                answer.append('FizzBuzz')
            elif i % 5 == 0:
                answer.append('Buzz')
            elif i % 3 == 0:
                answer.append('Fizz')
            else:
                answer.append(f'{i}')

        return answer
