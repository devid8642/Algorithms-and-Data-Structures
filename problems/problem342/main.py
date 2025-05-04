def kangaroo(x1, v1, x2, v2):
    if (v2 >= v1):
        return 'NO'
    k = (x2 - x1) // (v1 - v2)
    if k*v1 + x1 == k*v2 + x2:
        return 'YES'
    return 'NO'

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    x1 = int(first_multiple_input[0])

    v1 = int(first_multiple_input[1])

    x2 = int(first_multiple_input[2])

    v2 = int(first_multiple_input[3])

    print(kangaroo(x1, v1, x2, v2))