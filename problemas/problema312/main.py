from itertools import combinations_with_replacement

if __name__ == '__main__':
    inp = input().split(' ')
    s = inp[0]
    k = int(inp[1])
    aux = []
    ans = []
    aux = list(combinations_with_replacement(s, k))
    for i in aux:
        tmp = sorted(i)
        ans.append(tmp)
    ans = sorted(ans)
    for i in ans:
        print(''.join(i))
