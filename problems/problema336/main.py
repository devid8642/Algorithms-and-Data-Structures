def staircase(n):
    for c in range(1, n + 1):
        txt = ' ' * (n - c)
        txt += '#' * (c)
        print(txt)

if __name__ == '__main__':
    n = int(input())
    staircase(n)
