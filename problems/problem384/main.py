# Problem: https://neps.academy/br/exercise/676


def main():
    input_length = int(input())
    numbers = list(map(int, input().split()))

    possible_max_product_1 = numbers[-1] * numbers[-2] * numbers[-3]
    possible_max_product_2 = numbers[0] * numbers[1] * numbers[-1]
    max_product = max(possible_max_product_1, possible_max_product_2)

    print(max_product)


if __name__ == '__main__':
    main()
