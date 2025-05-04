import cmath

if __name__ == '__main__':
    inp = input()
    z = complex(inp)
    print(abs(z))
    print(cmath.phase(z))
    