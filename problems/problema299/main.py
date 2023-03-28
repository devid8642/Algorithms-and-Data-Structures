if __name__ == '__main__':
    inp = input().split(' ')
    n, m = int(inp[0]), int(inp[1])
    grupo_a = []
    grupo_b = []
    for c in range(n):
        inp = input()
        grupo_a.append(inp)
    for c in range(m):
        inp = input()
        grupo_b.append(inp)
    for i in grupo_b:
        ans = []
        for c in range(0, len(grupo_a)):
            if i == grupo_a[c]:
                ans.append(c)
        if len(ans) == 0:
            print(-1, end = ' ')
        else:
            for a in ans:
                print(f'{a + 1}', end = ' ')
        print()
