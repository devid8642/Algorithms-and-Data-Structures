from itertools import groupby

inp = input().split(' ')
a = int(inp[0])
n = int(inp[1])
m = int(inp[2])
resp = -1
for c in range(n, 0, -1):
    inp = list(map(int, input().split(' ')))
    data = []
    for k, g in groupby(inp):
        data.append(list(g))
    for i in data:
        if 1 not in i and len(i) >= a:
            if resp == -1:
                resp = c
            elif c < resp:
                resp = c
print(resp)
