# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import product

a = input().split()
a = list(map(int,a))

b= input().split()
b= list(map(int,b))

#space seprated print
for i in product(a,b):
    print(i, end= " ")

