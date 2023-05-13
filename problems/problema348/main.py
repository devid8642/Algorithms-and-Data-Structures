# Problema: https://neps.academy/br/exercise/892

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split(' ')))
    i, j = 0, n - 1
    soma = arr[i] + arr[j]
    ans = 'S'
    while i <= j:
        if arr[i] + arr[j] != soma:
            ans = 'N'
            break
        i += 1
        j -= 1
    print(ans)
