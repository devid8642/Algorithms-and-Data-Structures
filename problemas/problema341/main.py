def countApplesAndOranges(s, t, a, b, apples, oranges):
    new_apples = []
    new_oranges = []
    cont_apples = 0
    cont_oranges = 0
    for apple in apples:
        new_apples.append(apple + a)
    for orange in oranges:
        new_oranges.append(orange + b)
    for apple in new_apples:
        if apple >= s and apple <= t:
            cont_apples += 1
    for orange in new_oranges:
        if orange >= s and orange <= t:
            cont_oranges += 1
    print(cont_apples)
    print(cont_oranges)

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    s = int(first_multiple_input[0])

    t = int(first_multiple_input[1])

    second_multiple_input = input().rstrip().split()

    a = int(second_multiple_input[0])

    b = int(second_multiple_input[1])

    third_multiple_input = input().rstrip().split()

    m = int(third_multiple_input[0])

    n = int(third_multiple_input[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, apples, oranges)
