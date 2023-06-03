if __name__ == '__main__':
    n = int(input())
    nums = input().split(' ')
    nums = set(map(int, nums))
    n = int(input())
    for c in range(n):
        inp = input()
        if inp == 'pop' and len(nums) > 0:
            nums.pop()
        else:
            inp = inp.split(' ')
            op = inp[0]
            num = int(inp[1])
            if op == 'remove':
                try:
                    nums.remove(num)
                except KeyError:
                    pass
            else:
                nums.discard(num)
    print(sum(nums))
