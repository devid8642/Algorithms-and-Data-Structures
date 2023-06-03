from itertools import product

if __name__ == '__main__':
    a = input().split(' ')
    b = input().split(' ')
    a = list(map(int, a))
    b = list(map(int, b))
    ans = product(a, b)
    for e in ans:
        print(e, end = ' ')
    print('')
