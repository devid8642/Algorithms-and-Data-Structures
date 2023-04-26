if __name__ == '__main__':
    t = int(input())
    for c in range(t):
        n = int(input())
        blocos = list(map(int, input().split(' ')))
        pilha = []
        i = 0
        ctl = True
        while len(blocos) != 0:
            n = len(blocos)
            m = len(pilha)
            if i == 0:
                if blocos[0] > blocos[n - 1]:
                    pilha.append(blocos[0])
                    blocos.pop(0)
                else:
                    pilha.append(blocos[n - 1])
                    blocos.pop(n - 1)
                i = 1
            else:
                if blocos[0] <= pilha[m - 1] and blocos[n - 1] <= pilha[m - 1]:
                    pilha.append(max(blocos[0], blocos[n - 1]))
                    if blocos[0] > blocos[n - 1]:
                        blocos.pop(0)
                    else:
                        blocos.pop(n - 1)
                elif blocos[0] <= pilha[m - 1]:
                    pilha.append(blocos[0])
                    blocos.pop(0)
                elif blocos[n - 1] <= pilha[m - 1]:
                    pilha.append(blocos[n - 1])
                    blocos.pop(n - 1)
                else:
                    ctl = False
                    break
        if ctl:
            print('Yes')
        else:
            print('No')
