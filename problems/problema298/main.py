def average(array):
    conjunto = set(array)
    soma = 0
    for n in conjunto:
        soma += n
    return f'{soma/len(conjunto):.3f}'

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
