def swap_case(s):
    ans = ''

    for c in s:
        if c.islower():
            ans += c.upper()
        elif c.isupper():
            ans += c.lower()
        else:
            ans += c
        
    return ans


if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
