from itertools import permutations

if __name__ == '__main__':
    inp = input().split(' ')
    s, tam = inp[0], int(inp[1])
    ans = sorted(list(permutations(s, tam)))
    for i in ans:
        tmp = ''
        for j in i:
            tmp += j
        print(tmp)
