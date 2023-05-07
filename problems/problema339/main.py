def timeConversion(s):
    n = len(s)
    type_time = s[n - 2] + s[n - 1]
    s_splited = s[:n - 2].split(':')
    if type_time == 'AM':
        if s_splited[0] == '12':
            s_splited[0] = '00'
        return ':'.join(s_splited)
    if s_splited[0] != '12':
        s_splited[0] = str(int(s_splited[0]) + 12)
    return ':'.join(s_splited)

if __name__ == '__main__':
    s = input()
    print(timeConversion(s))
