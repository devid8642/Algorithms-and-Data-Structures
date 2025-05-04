if __name__ == '__main__':
    n = int(input())
    for c in range(n):
        inp = input().split(' ')
        try:
            print(int(inp[0]) // int(inp[1]))
        except ZeroDivisionError as e:
            print(f'Error Code: {e}')
        except ValueError as e:
            print(f'Error Code: {e}')
