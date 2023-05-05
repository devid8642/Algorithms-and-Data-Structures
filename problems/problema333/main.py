def compareTriplets(a, b):
    pont_alice = 0
    pont_bob = 0
    for c in range(0, 3):
        if a[c] > b[c]:
            pont_alice += 1
        elif b[c] > a[c]:
            pont_bob += 1
    return [pont_alice, pont_bob]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()