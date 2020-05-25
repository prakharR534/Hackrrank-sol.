import numpy as np

poly = [float(x) for x in input().split()]

val = float(input())

print(np.polyval(poly, val))
