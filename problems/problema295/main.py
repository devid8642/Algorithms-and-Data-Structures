from collections import Counter

if __name__ == '__main__':
    num_sapatos = int(input())
    tam_sapatos = input().split(' ')
    tam_sapatos = list(map(int, tam_sapatos))
    tam_sapatos = Counter(tam_sapatos)
    compradores = int(input())
    ans = 0
    for c in range(compradores):
        inp = input().split(' ')
        tam, valor = int(inp[0]), int(inp[1])
        if tam in tam_sapatos.keys():
            if tam_sapatos[tam] > 0:
                ans += valor
                tam_sapatos[tam] -= 1
    print(ans)
