import bisect

def busca_binaria(arr, x):
    i = bisect.bisect_left(arr, x)
    if i < len(arr) and arr[i] == x:
        return True
    return False

if __name__ == '__main__':
    inp = input().split(' ')
    n = int(inp[0])
    m = int(inp[0])
    resp = 0

    inp = input().split(' ')
    arr = list(map(int, inp))
    inp = input().split(' ')
    a = sorted(list(map(int, inp)))
    inp = input().split(' ')
    b = sorted(list(map(int, inp)))

    for i in arr:
        if busca_binaria(a, i):
            resp += 1
        elif busca_binaria(b, i):
            resp -= 1

    print(resp)
