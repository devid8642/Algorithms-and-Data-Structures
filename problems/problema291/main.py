def solve(s):
    s = s.split(' ')
    for c in range(0, len(s)):
        s[c] = s[c].capitalize()
    return ' '.join(s)

if __name__ == '__main__':
    s = input()

    result = solve(s)

    print(result)