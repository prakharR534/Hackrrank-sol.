# Enter your code here. Read input from STDIN. Print output to STDOUT

A = int(input())
b = map(int,input().split())
c = int(input())
d = map(int,input().split())

print(len(set(b).symmetric_difference(set(d))))
