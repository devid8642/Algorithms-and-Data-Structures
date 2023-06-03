def plusMinus(arr):
    total = len(arr)
    pos = 0
    neg = 0
    nulos = 0
    for n in arr:
        if n > 0:
            pos += 1
        elif n < 0:
            neg += 1
        else:
            nulos += 1
    print(f'{pos/total:.6f}')
    print(f'{neg/total:.6f}')
    print(f'{nulos/total:.6f}')

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split(' ')))
    plusMinus(arr)
