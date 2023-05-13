# Problema: https://neps.academy/br/exercise/391

if __name__ == '__main__':
    inp = list(map(int, input().split(' ')))
    n, m = inp[0], inp[1]
    nums = list(map(int, input().split(' ')))
    cont = 0

    for c in range(0, n - 1):
        if nums[c] < m:
            dif = m - nums[c]
            nums[c] += dif
            nums[c + 1] += dif
            cont += dif
        elif nums[c] > m:
            dif = nums[c] - m
            nums[c] -= dif
            nums[c + 1] -= dif
            cont += dif
        else:
            continue

    print(cont)
