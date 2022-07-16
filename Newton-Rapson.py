from math import *
import math as mt

def Newton_Rapson(n):
    if n==0:
        return 3.5
    else:
       x=Newton_Rapson(n-1)
       x=x-((pow(x,x)-100)/(pow(x,x)*(1+log(x))))
       return x

n=1000
m=Newton_Rapson(n)
print("El número calculado en",n,"iteraciones es",m)
print("Y ese número elevado a si mismo es: ",pow(m,m))