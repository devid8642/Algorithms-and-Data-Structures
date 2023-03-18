if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    
    for c in range(len(arr) - 2, -1, -1):
        if (arr[c] != arr[c + 1]):
            print(arr[c])
            break
