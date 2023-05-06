def miniMaxSum(arr):
    arr = sorted(arr)
    partial_arr1 = arr[0:4]
    partial_arr2 = arr[1:5]
    print(sum(partial_arr1), sum(partial_arr2))

if __name__ == '__main__':
    arr = list(map(int, input().split(' ')))
    miniMaxSum(arr)
