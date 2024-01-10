import bisect
from itertools import accumulate as acc

n = int(input())
s = int(input())
medicoes = list(map(int, input().split(' ')))
resp = 0
psa = list(acc(medicoes))

# para todo i de 1 a n - 1 é preciso determinar todos os j's tais que psa[j] - psa[i] = s
# no caso de i = 0 teremos que determinar todos os j's tais que psa[j] = s
# ou seja ou estamos buscando s (para i = 0) ou estamos buscando s + psa[i - 1]

for i in range(0, n):
    aux = psa[i:]
    m = len(aux)
    if i == 0:
        k = 0
    else:
        k = psa[i - 1]
    j1 = bisect.bisect_left(aux, s + k)
    j2 = bisect.bisect_right(aux, s + k)
    if j1 != m:
        if aux[j1] - k == s:
            if aux[j2] - k == s:
                resp += j2 - j1 + 1
            else:
                resp += 1
print(resp)
