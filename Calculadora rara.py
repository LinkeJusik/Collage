from math import *
import math as mt    

def sumatoria_n(n):
    cont = 0
    for i in range(1,n+1,1):
        cont += i
    return cont

def sumatoria_inv(n):
    cont = 0
    for i in range(1,n+1,1):
        cont += (1/i)
    return cont

def sumatoria_cuad(n):
    cont = 0
    for i in range(1,n+1,1):
        cont += (1/(i**2))
    return cont

def logaritmo_nat(n,a):
    if n==1:
        return 0
    else:
        x=logaritmo_nat(n-1,a)
        #print(x,"es una aproximación")
        x=x-(((pow(mt.e,x)-a))/(pow(mt.e,x)))
        return x
    
def serie_pi(n):
    cont = 0
    for i in range(1,n+1,1):
        cont += ((pow(-1,i+1))/((2*i)-1))
    return 4*cont

def serie_pi2(n):
    cont = 0
    for i in range(1,n+1,1):
        cont += (1/(i**2))
    cont *= 6
    return pow(cont,0.5)

def serie_e(n):
    if n == 0:
        return 1
    else:
        return (1/factorial(n))+serie_e(n-1)
    
def memoize(f):
    memo = {}
    def helper(x):
        if x not in memo:            
            memo[x] = f(x)
        return memo[x]
    return helper

@memoize
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)