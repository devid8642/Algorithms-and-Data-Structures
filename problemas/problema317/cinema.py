def verifica(idade):
    if idade <= 17:
        return 15
    elif idade <= 59:
        return 30
    else:
        return 20
idade1 = int(input())
idade2 = int(input())
total = verifica(idade1) + verifica(idade2)
print(total)
