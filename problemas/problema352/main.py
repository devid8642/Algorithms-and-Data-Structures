# Problema: https://www.hackerrank.com/challenges/electronics-shop/

def getMoneySpent(keyboards, drives, b):
    k = sorted(keyboards)
    d = sorted(drives)
    maior = 0
    if k[0] + d[0] > b:
        return -1
    for i in k:
        for j in d:
            if i + j <= b and i + j > maior:
                maior = i + j
    return maior

if __name__ == '__main__':
    bnm = input().split()

    b = int(bnm[0])

    n = int(bnm[1])

    m = int(bnm[2])

    keyboards = list(map(int, input().rstrip().split()))

    drives = list(map(int, input().rstrip().split()))

    print(getMoneySpent(keyboards, drives, b))
