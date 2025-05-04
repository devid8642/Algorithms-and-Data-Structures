def breakingRecords(scores):
    cont1 = 0
    cont2 = 0
    for c in range(0, len(scores)):
        if c == 0:
            menor = scores[c]
            maior = scores[c]
        else:
            if scores[c] > maior:
                cont1 += 1
                maior = scores[c]
            elif scores[c] < menor:
                cont2 += 1
                menor = scores[c]
    return [str(cont1), str(cont2)]

if __name__ == '__main__':
    n = int(input().strip())

    scores = list(map(int, input().rstrip().split()))

    print(' '.join(breakingRecords(scores)))
