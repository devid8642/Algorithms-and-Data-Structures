palavras = input().split(' ')
resp = []
for palavra in palavras:
    nova_palavra = ''
    for c in range(0, len(palavra)):
        if c % 2 != 0:
            nova_palavra += palavra[c]
    resp.append(nova_palavra)
print(' '.join(resp))
