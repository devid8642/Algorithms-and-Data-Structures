# Problema: https://www.hackerrank.com/challenges/drawing-book/

def pageCount(n, p):
    livro = [1]
    pos = 0
    for c in range(2, n + 1, 2):
        if c == n:
            livro.append(n)
        else:
            livro.append((c, c + 1))
        if c == p or c + 1 == p:
            pos = len(livro) - 1
    return min(pos - 0, len(livro) - 1 - pos)

if __name__ == '__main__':
    n = int(input().strip())

    p = int(input().strip())

    print(pageCount(n, p))