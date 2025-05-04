from itertools import combinations

if __name__ == '__main__':
    n = int(input())
    letras = input().split(' ')
    k = int(input())
    aux = []
    cont = 0
    for c in range(1, n + 1):
        aux.append(c)
    combs = list(combinations(aux, k))
    for t in combs:
        for i in t:
            if letras[i - 1] == 'a':
                cont += 1
                break
    print(f'{cont/len(combs):.3f}')