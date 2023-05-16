# Problema: https://www.hackerrank.com/challenges/counting-valleys/

def countingValleys(steps, path):
    altitude = 0
    cont = 0
    ctl = False
    for step in path:
        if step == 'D':
            altitude -= 1
        else:
            altitude += 1
        if altitude < 0 and ctl == False:
            ctl = True
        elif ctl == True and altitude >= 0:
            ctl = False
            cont += 1
    return cont

if __name__ == '__main__':
    steps = int(input().strip())

    path = input()

    print(countingValleys(steps, path))