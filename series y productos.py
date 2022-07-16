def Basilea(n):
    if n == 1:
        return 1
    else:
        return Basilea(n-1)+(1/pow(n,2))

def BasPro(n):
    if n == 1:
        return 1
    else:
        return BasPro(n-1)*(1/pow(n,2))

print(Basilea(50))