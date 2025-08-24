# Problem: https://neps.academy/br/exercise/469
import collections


def main():
    matrix_lines, matrix_columns = map(int, input().split())
    matrix = [list(input().strip()) for _ in range(matrix_lines)]

    queue = collections.deque()
    for r in range(matrix_lines):
        for c in range(matrix_columns):
            if matrix[r][c] == 'o':
                queue.append((r, c))

    while queue:
        r, c = queue.popleft()

        if r + 1 < matrix_lines and matrix[r + 1][c] == '.':
            matrix[r + 1][c] = 'o'
            queue.append((r + 1, c))

        if r + 1 < matrix_lines and matrix[r + 1][c] == '#':
            if c - 1 >= 0 and matrix[r][c - 1] == '.':
                matrix[r][c - 1] = 'o'
                queue.append((r, c - 1))
            if c + 1 < matrix_columns and matrix[r][c + 1] == '.':
                matrix[r][c + 1] = 'o'
                queue.append((r, c + 1))

    for line in matrix:
        print(''.join(line))


if __name__ == '__main__':
    main()
