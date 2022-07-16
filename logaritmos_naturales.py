from math import *
import math as mt

def memoize(f):
    memo = {}
    def helper(x):
        if x not in memo:            
            memo[x] = f(x)
        return memo[x]
    return helper

#@memoize
def Calculadora_ln(n,a):
    if n==1:
        return 0
    else:
        x=Calculadora_ln(n-1,a)
        #print(x,"es una aproximación")
        x=x-(((pow(mt.e,x)-a))/(pow(mt.e,x)))
        return x

n=1000
#a=mt.pi
a=float(input("Ingresa el número del cual quieras calcular su logaritmo natural\n"))
m=Calculadora_ln(n,a)

print("El número calculado en",n,"iteraciones es",m)
print("e^",m,"es: ",pow(mt.e,m))