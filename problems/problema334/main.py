def diagonalDifference(arr):
    dig1 = 0
    dig2 = 0
    for c in range(0, len(arr)):
        dig1 += arr[c][c]
    for i in range(0, len(arr)):
        for j in range(0, len(arr)):
            if i + j == len(arr) - 1:
                dig2 += arr[i][j]
    return abs(dig1 - dig2)

if __name__ == '__main__':
    n = int(input())
    arr = []
    for c in range(0, n):
        arr.append(list(map(int, input().split(' '))))
    print(diagonalDifference(arr))
