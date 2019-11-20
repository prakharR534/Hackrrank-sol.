a = int(input())
b = input().split()
b = list(map(int,b))
c = int(input())
d = input().split()
d = list(map(int,d))

print (len(set(b).difference(set(d))))
