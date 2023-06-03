# Problema: https://neps.academy/br/exercise/1489

def determina_carta(carta):
    global baralho
    if carta[-1] == 'C':
        chave = 'copas'
    elif carta[-1] == 'P':
        chave = 'paus'
    elif carta[-1] == 'U':
        chave = 'ouros'
    else:
        chave = 'espadas'
    carta = carta[:2]
    if carta not in baralho[chave][0] and baralho[chave][1] != 'erro':
        baralho[chave][0].append(carta)
        baralho[chave][1] -= 1
    else:
        baralho[chave][1] = 'erro'

if __name__ == '__main__':
    baralho = {
        'copas': [[], 13],
        'espadas': [[], 13],
        'ouros': [[], 13],
        'paus': [[], 13]
    }
    cartas = input()
    c = 0
    carta = ''
    for i in range(0, len(cartas), 3):
        carta = cartas[i] + cartas[i + 1] + cartas[i + 2]
        determina_carta(carta)
    for grupo in baralho:
        print(baralho[grupo][1])
