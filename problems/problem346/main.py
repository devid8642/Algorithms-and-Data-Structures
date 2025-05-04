from itertools import groupby as gb

def migratoryBirds(arr):
    arr = sorted(arr)
    data = {}
    maior = (0, 0)
    for k, g in gb(arr):
        data[k] = len(list(g))
    for c in data:
        if data[c] > maior[0]:
            maior = (data[c], c)
        elif data[c] == maior[0] and c < maior[1]:
            maior = (data[c], c)
    return maior[1]

if __name__ == '__main__':
    arr_count = int(input().strip())

    arr = list(map(int, input().rstrip().split()))
    
    print(migratoryBirds(arr))
