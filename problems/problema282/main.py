if __name__ == '__main__':
    n = int(input())
    lst = []

    for c in range(n):
        op = input().split()
        if op[0] == 'insert':
            lst.insert(int(op[1]), int(op[2]))
        elif op[0] == 'print':
            print(lst)
        elif op[0] == 'remove':
            lst.remove(int(op[1]))
        elif op[0] == 'append':
            lst.append(int(op[1]))
        elif op[0] == 'sort':
            lst.sort()
        elif op[0] == 'pop':
            lst.pop()
        elif op[0] == 'reverse':
            lst.reverse()