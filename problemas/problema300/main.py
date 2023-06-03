import calendar

if __name__ == '__main__':
    inp = input().split(' ')
    mes = int(inp[0])
    dia = int(inp[1])
    ano = int(inp[2])
    dia = calendar.weekday(ano, mes, dia)
    print(calendar.day_name[dia].upper())
