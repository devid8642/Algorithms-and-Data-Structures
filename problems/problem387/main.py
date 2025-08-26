# Problem: https://neps.academy/br/exercise/310


def main():
    first_rectangle = list(map(int, input().strip().split()))
    second_rectangle = list(map(int, input().strip().split()))

    initial_x = max(first_rectangle[0], second_rectangle[0])
    final_x = min(first_rectangle[2], second_rectangle[2])
    initial_y = max(first_rectangle[1], second_rectangle[1])
    final_y = min(first_rectangle[3], second_rectangle[3])

    if initial_x <= final_x and initial_y <= final_y:
        print(1)
    else:
        print(0)


if __name__ == '__main__':
    main()
