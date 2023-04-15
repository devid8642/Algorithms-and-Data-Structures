import math
if __name__ == '__main__':
    ab = int(input())
    bc = int(input())
    ac = math.sqrt((ab ** 2) + (bc ** 2))
    c = math.asin(ab / ac)
    print(f'{round((c * 180)/math.pi)}' + u'\u00B0')