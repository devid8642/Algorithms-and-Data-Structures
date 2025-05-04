def ordena(lista):
    return lista[1]

if __name__ == '__main__':
    n = int(input())
    alunos = []
    ans = []
    notas = []

    for c in range(n):
        nome = input()
        nota = float(input())
        alunos.append([nome, nota])
        if nota not in notas:
            notas.append(nota)

    notas.sort()

    if n == 2:
        segunda_menor = notas[0]
    else:
        segunda_menor = notas[1]

    for aluno in alunos:
        if aluno[1] == segunda_menor:
            ans.append(aluno[0])

    ans.sort()

    for aluno in ans:
        print(aluno)
