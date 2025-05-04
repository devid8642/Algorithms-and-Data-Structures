n = int(input())
i, j = 0, 0
for c in range(n):
    linha = list(map(int, input().split(' ')))
    if 0 not in linha:
        soma = sum(linha)
    else:
        soma_parcial = sum(linha)
        i = c + 1
        j = linha.index(0) + 1
print(soma - soma_parcial)
print(i)
print(j)
