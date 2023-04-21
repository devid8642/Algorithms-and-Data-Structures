from itertools import groupby

if __name__ == '__main__':
    s = input()
    grupos = []
    chaves = []
    for k, g in groupby(s):
        grupos.append(list(g))
        chaves.append(k)
    for c in range(0, len(chaves)):
        print(f'({len(grupos[c])}, {chaves[c]})', end = ' ')
    print()
    