from itertools import accumulate as acc

def birthday(s, d, m):
    prefix_s = list(acc(s))
    cont = 0
    for i in range(0, len(prefix_s)):
        for j in range(i, len(prefix_s)):
            if i == 0:
                if j + 1 == m and prefix_s[j] == d:
                    cont += 1
            else:
                soma = prefix_s[j] - prefix_s[i - 1]
                if j - i + 1 == m and soma == d:
                    cont += 1
    return cont

if __name__ == '__main__':
    n = int(input().strip())

    s = list(map(int, input().rstrip().split()))

    first_multiple_input = input().rstrip().split()

    d = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    print(birthday(s, d, m))
