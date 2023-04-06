from collections import namedtuple

if __name__ == '__main__':
    n = int(input())
    inp = input().split(' ')
    cols = []
    soma = 0
    for i in inp:
        if i != '':
            cols.append(i)
    pos = cols.index('MARKS')
    for c in range(n):
        inp = input().split(' ')
        registro = []
        for i in inp:
            if i != '':
                registro.append(i)
        soma += int(registro[pos])
    print(f'{soma/n:.2f}')
        
