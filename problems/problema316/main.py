if __name__ == '__main__':
    s = input()
    aux = {}
    data = []
    for c in s:
        if c in aux.keys():
            aux[c] += 1
        else:
            aux[c] = 1
    for i in aux:
        data.append((i, aux[i]))
    for i in range(0, len(data)):
        for j in range(0, len(data) - 1):
            if data[j][1] < data[j + 1][1]:
                tmp = data[j + 1]
                data[j + 1] = data[j]
                data[j] = tmp
            elif data[j][1] == data[j + 1][1]:
                if data[j][0] > data[j + 1][0]:
                    tmp = data[j + 1]
                    data[j + 1] = data[j]
                    data[j] = tmp
    for c in range(0, 3):
        print(f'{data[c][0]} {data[c][1]}')
