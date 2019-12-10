import numpy

N, M = map(int, input().split())

a = numpy.array([list(map(int, input().split())) for n in range(N)])
b = numpy.array([list(map(int, input().split())) for n in range(N)])


print (numpy.add(a, b))

print (numpy.subtract(a,b ))

print (numpy.multiply(a, b)) 

print (a// b)

print (numpy.mod(a, b))

print (numpy.power(a, b))
