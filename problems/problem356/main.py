# Problema: https://neps.academy/br/exercise/464

if __name__ == '__main__':
    n = int(input())
    arr = []
    for c in range(0, n):
        if c == 0:
            v = int(input())
            arr.append(v)
        else:
            v = int(input())
            if v != arr[-1]:
                arr.append(v)
    print(len(arr))