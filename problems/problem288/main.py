if __name__ == '__main__':
    s = input()
    aux = False
    
    for c in s:
        if c.isalnum():
            aux = True
            break
        
    print(aux)
    
    aux = False
    
    for c in s:
        if c.isalpha():
            aux = True
            break
        
    print(aux)

    aux = False

    for c in s:
        if c.isdigit():
            aux = True
            break
        
    print(aux)

    aux = False

    for c in s:
        if c.islower():
            aux = True
            break
        
    print(aux)

    aux = False

    for c in s:
        if c.isupper():
            aux = True
            break
        
    print(aux)
