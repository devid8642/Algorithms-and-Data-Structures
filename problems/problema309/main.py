if __name__ == '__main__':
    n = int(input())
    conj = set()
    for c in range(n):
        pais = input()
        conj.add(pais)
    print(len(conj))
