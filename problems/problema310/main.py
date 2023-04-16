if __name__ == '__main__':
    n = int(input())
    conj = set()
    cont = {}
    for c in range(n):
        s = input()
        conj.add(s)
        if s in cont.keys():
            cont[s] += 1
        else:
            cont[s] = 1
    print(len(conj))
    for i in cont:
        print(cont[i], end = ' ')
