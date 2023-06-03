# Problema: https://www.hackerrank.com/challenges/cats-and-a-mouse/

def catAndMouse(x, y, z):
    if abs(x - z) == abs(y - z):
        return 'Mouse C'
    elif abs(x - z) == min(abs(x - z), abs(y - z)):
        return 'Cat A'
    return 'Cat B'

if __name__ == '__main__':
    q = int(input())

    for q_itr in range(q):
        xyz = input().split()

        x = int(xyz[0])

        y = int(xyz[1])

        z = int(xyz[2])

        print(catAndMouse(x, y, z))