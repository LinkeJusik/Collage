from sympy import *
from math import *
import math as mt

x = Symbol('x')
y = Symbol('y')
n = Symbol('n')

#print(expand((x+y)**6))
a=limit((1+(1/n))**n, n, oo)
print(a.evalf())