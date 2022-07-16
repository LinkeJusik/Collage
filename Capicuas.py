def capi(n):
    m = inver(n)
    if m == n:
        return True
    else:
        return False

def inver(n):
    n = str(n)
    m=''
    for i in range(len(n)-1,-1,-1):
        m = m+n[i]
    return int(m)

def crearcapi(n):
    if capi(n) == True:
        print("El número",int(n),"es capicua")
    else:
        aux = n + inver(n)
        print("El número",n,"no es capicua")
        crearcapi(aux)

n = int(input("Ingresa un número: "))
crearcapi(n)