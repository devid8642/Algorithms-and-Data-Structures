letra = input()
texto = input().split(' ')
cont = 0
for palavra in texto:
    if letra in palavra:
        cont += 1
print(f'{(cont/len(texto))*100:.1f}')
