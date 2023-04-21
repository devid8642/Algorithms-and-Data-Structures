from collections import deque

if __name__ == '__main__':
    n = int(input())
    d = deque()
    for c in range(n):
        inp = input()
        if inp == 'pop' and len(d) > 0:
            d.pop()
        elif inp == 'popleft' and len(d) > 0:
            d.popleft()
        else:
            inp = inp.split(' ')
            op = inp[0]
            num = int(inp[1])
            if op == 'append':
                d.append(num)
            else:
                d.appendleft(num)
    for i in d:
        print(i, end = ' ')
    print()
