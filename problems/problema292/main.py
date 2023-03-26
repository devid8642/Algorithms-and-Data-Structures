def ocorrencia(i, j, string, sub_string):
    if sub_string not in string:
        return 0
    cont = 0
    for i in range(0, len(string)):
        aux = ''
        for j in range(i, i + len(sub_string)):
            if j > len(string) - 1:
                break
            aux += string[j]
        if aux == sub_string:
            cont += 1
    return cont

def minion_game(string):
    vogais = 'AEIOU'
    stuart = 0
    kevin = 0
    stuart_subs = []
    kevin_subs = []

    for i in range(0, len(string)):
        aux = ''
        for j in range(i, len(string)):
            aux += string[j]
            if aux[0] not in vogais:
                if aux not in stuart_subs:
                    stuart += ocorrencia(string, aux)
                    stuart_subs.append(aux)
            else:
                if aux not in kevin_subs:
                    kevin += ocorrencia(string, aux)
                    kevin_subs.append(aux)
    if stuart > kevin:
        print(f'Stuart {stuart}')
    elif kevin > stuart:
        print(f'Kevin {kevin}')
    else:
        print('Draw')

if __name__ == '__main__':
    s = input()
    minion_game(s)
