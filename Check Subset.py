# Enter your code here. Read input from STDIN. Print output to STDOUT

n= int(input())

for i in range(n):
    a,A = int(input()),set(input().split())
    b,B = int(input()),set(input().split())

    print(A.issubset(B))
