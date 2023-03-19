def count_substring(string, sub_string):
    if sub_string not in string:
        return 0
    tam = len(sub_string)
    cont = 0
    for i in range(0, len(string)):
        aux = ''
        for j in range(i, i + tam):
            if j > len(string) - 1:
                break
            aux += string[j]
        if sub_string == aux:
            cont += 1
    return cont


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
