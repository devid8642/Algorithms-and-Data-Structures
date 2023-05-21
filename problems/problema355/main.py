def hurdleRace(k, height):
    alturas = sorted(height)
    if k > alturas[-1]:
        return 0
    return abs(k - alturas[-1])

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    height = list(map(int, input().rstrip().split()))

    print(hurdleRace(k, height))