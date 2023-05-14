# Problema: https://www.hackerrank.com/challenges/sock-merchant/

from itertools import groupby as gb

def sockMerchant(n, ar):
    ar = sorted(ar)
    grupos = {}
    chaves = []
    cont = 0
    for k, g in gb(ar):
        grupos[k] = len(list(g))
        chaves.append(k)
    for chave in chaves:
        if grupos[chave] >= 2:
            cont += grupos[chave] // 2
    return cont

if __name__ == '__main__':
    n = int(input().strip())

    ar = list(map(int, input().rstrip().split()))

    print(sockMerchant(n, ar))
