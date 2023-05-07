def birthdayCakeCandles(candles):
    candles = sorted(candles, reverse = True)
    cont = 0
    for c in range(0, len(candles)):
        if candles[c] == candles[0]:
            cont += 1
        else:
            break
    return cont

if __name__ == '__main__':
    n = int(input())
    candles = list(map(int, input().split(' ')))
    print(birthdayCakeCandles(candles))
