from collections import OrderedDict

if __name__ == '__main__':
    n = int(input())
    dic = OrderedDict()
    for c in range(n):
        inp = input().split(' ')
        chave = ''
        for c in inp:
            if not c.isnumeric():
                chave += c + ' '
            else:
                quant = int(c)
        chave = chave.strip()
        if chave in dic.keys():
            dic[chave] += quant
        else:
            dic[chave] = quant
    for registro in dic:
        print(registro, dic[registro])
