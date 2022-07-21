n = int(input())
m = int(input())
s = int(input())
maior = -1

for i in range(n, m + 1):
    soma = 0;
    num = str(i)
    for j in num:
        x = int(j)
        soma += x
    if (soma == s and int(num) > maior):
        maior = int(num)

print(maior)

