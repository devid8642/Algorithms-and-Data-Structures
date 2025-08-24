# Problem: https://neps.academy/br/exercise/2710


def main():
    left_number = int(input())
    right_number = int(input())

    if left_number > right_number:
        print(left_number + right_number)
    else:
        print(2 * (right_number - left_number))


if __name__ == "__main__":
    main()
