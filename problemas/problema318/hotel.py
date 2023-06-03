d = int(input())
a = int(input())
n = int(input())

# Para n = 1 a solução é trivial
if n == 1:
    print(31 * d)
else:
    # para outros casos primeiro calcula-se o número de dias que a pessoa vai ficar no hotel
    dias = 31 - n + 1
    # agora, seja x o multiplicador do A, esse x é dado por n - 1 para n >= 2 e n <= 15
    # Se n > 15 então x sempre é 14
    if n <= 15:
        multiplicador = n - 1
    else:
        multiplicador = 14
    print(dias*(d + multiplicador*a))
