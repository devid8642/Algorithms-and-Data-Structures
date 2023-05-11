def divisibleSumPairs(n, k, ar):
    cont = 0
    for i in range(0, n):
        for j in range(i + 1, n):
            if (ar[i] + ar[j]) % k == 0:
                cont += 1
    return cont

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    ar = list(map(int, input().rstrip().split()))

    print(divisibleSumPairs(n, k, ar))