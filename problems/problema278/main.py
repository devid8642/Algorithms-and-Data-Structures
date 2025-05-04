n = int(input())
ingles = input().split()

b = int(input())
frances = input().split()

uniao = set(ingles) & set(frances)
print(len(uniao))
