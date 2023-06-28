from math import sqrt

def distancia(lst1, lst2):
    x1, y1, z1 = lst1
    x2, y2, z2 = lst2
    dif1 = pow(x1 - x2, 2)
    dif2 = pow(y1 - y2, 2)
    dif3 = pow(z1 - z2, 2)
    return sqrt(dif1 + dif2 + dif3)


if __name__ == '__main__':
    n = int(input())
    naves = []
    for c in range(n):
        posicoes = list(map(int, input().split(' ')))
        naves.append(posicoes)
    for i in range(0, n):
        dists = []
        for j in range(0, n):
            if i != j:
                dists.append(distancia(naves[i], naves[j]))
        dist = min(dists)
        if dist <= 20:
            print('A')
        elif dist <= 50:
            print('M')
        else:
            print('B')
