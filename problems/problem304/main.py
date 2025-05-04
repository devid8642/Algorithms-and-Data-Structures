if __name__ == '__main__':
    x = int(input())
    n = input().split(' ')
    x = int(input())
    m = input().split(' ')
    n = set(list(map(int, n)))
    m = set(list(map(int, m)))
    m_e_n = n.intersection(m)
    apenas_n = sorted(n.difference(m_e_n))
    apenas_m = sorted(m.difference(m_e_n))
    resp = sorted(n.difference(m_e_n).union(m.difference(m_e_n)))
    for i in resp:
        print(i)
