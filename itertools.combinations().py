from itertools import combinations

a = input().split()

n= int(a[1])

for i in range(1,n+1):
    for j in combinations(sorted(a[0]),i):
        print("".join(j))
