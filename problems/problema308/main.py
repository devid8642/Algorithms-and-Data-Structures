import re

if __name__ == '__main__':
    t = int(input())
    for c in range(t):
        r = input()
        try:
            re.compile(r)
        except re.error:
            print('False')
        else:
            print('True')
