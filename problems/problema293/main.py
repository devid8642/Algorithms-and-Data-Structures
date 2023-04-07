def merge_the_tools(string, k):
    quant = len(string) // k
    list_de_str = []
    ans = []
    tmp = ''
    cont = 0
    pos = 0
    while len(list_de_str) != quant:
        if cont == k:
            list_de_str.append(tmp)
            tmp = ''
            cont = 0
        if pos < len(string):
            tmp += string[pos]
        cont += 1
        pos += 1
    for e in list_de_str:
        tmp = ''
        for c in e:
            if c not in tmp:
                tmp += c
        ans.append(tmp)
    for e in ans:
        print(e)


if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
