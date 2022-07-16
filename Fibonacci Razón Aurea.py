phi = (1+pow(5,0.5))/2
from math import *
import math as mt

def Fibonacci(n):
    return mt.floor((1/pow(5,0.5))*(pow(phi,n)-(pow(-1/phi,n))))

n = int(input("Ingresa el n'simo número de Fibonacci que desees calcular: "))
print("El n'simo número de Fibonacci es ",Fibonacci(n))