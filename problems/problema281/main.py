if __name__ == '__main__':
    n = int(input())
    estudantes = {}
    for c in range(n):
        nome, *notas = input().split()
        pontuacao = list(map(float, notas))
        estudantes[nome] = pontuacao
    nome = input()
    nums = estudantes[nome]
    soma = 0
    c = 0

    for n in nums:
        soma += n
        c += 1

    print(f'{soma/c:.2f}')
