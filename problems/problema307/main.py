from itertools import combinations

if __name__ == '__main__':
    inp = input().split(' ')
    s = inp[0]
    k = int(inp[1])
    aux = []
    for c in range(1, k + 1):
        aux.append(list(combinations(s, c)))
    for i in aux:
        ans = []
        for j in i:
            j = sorted(j)
            ans.append(''.join(j))
        ans = sorted(ans)
        for j in ans:
            print(''.join(sorted(j)))
