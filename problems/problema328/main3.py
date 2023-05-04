def ops(a, b):
    dif = max(a, b) - min(a, b) - 1
    if dif % 2 == 0:
        return dif // 2
    return (dif + 1) // 2

inp = list(map(int, input().split(' ')))
f, r = inp[0], inp[1]
pos = list(map(int, input().split(' ')))
total_ops = []

for c in range(0, len(pos)):
    if c == 0:
        total_ops.append(pos[c] - 1)
        if c + 1 == len(pos):
            total_ops.append(f - pos[c])
    elif c == len(pos) - 1:
        ops_esquerda = ops(pos[c], pos[c - 1])
        ops_direita = 0
        if pos[c] < f:
            ops_direita = f - pos[c]
        total_ops.append(max(ops_esquerda, ops_direita))
    else:
        total_ops.append(ops(pos[c], pos[c - 1]))

print(max(total_ops))
