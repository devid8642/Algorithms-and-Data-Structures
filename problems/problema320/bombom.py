def valor_da_carta(carta, naipe_dominante):
    figura = carta[0]
    naipe = carta[1]
    if figura == 'A':
        pontuacao = 10
    elif figura == 'J':
        pontuacao = 11
    elif figura == 'Q':
        pontuacao = 12
    elif figura == 'K':
        pontuacao = 13
    if naipe == naipe_dominante:
        pontuacao += 4
        return pontuacao
    return pontuacao

luana = 0
edu = 0
for c in range(1, 8):
    if c == 1:
        naipe_dominante = input()[1]
    else:
        carta = input()
        pontuacao = valor_da_carta(carta, naipe_dominante)
        if c <= 4:
            luana += pontuacao
        else:
            edu += pontuacao
if luana > edu:
    print('Luana')
elif edu > luana:
    print('Edu')
else:
    print('empate')
