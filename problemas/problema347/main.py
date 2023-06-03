def bonAppetit(bill, k, b):
    b_certo = (sum(bill) - bill[k]) // 2
    if b_certo == b:
        print('Bon Appetit')
    else:
        print(max(b, b_certo) - min(b, b_certo))

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    bill = list(map(int, input().rstrip().split()))

    b = int(input().strip())

    bonAppetit(bill, k, b)