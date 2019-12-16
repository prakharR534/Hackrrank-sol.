# Enter your code here. Read input from STDIN. Print output to STDOUT

S = set(map(int,input().split()))
n = int(input())

#by default
issuperset = True

for i in range(n):
    s = set(map(int,input().split()))
    if not s.issubset(S):
        issuperset = False
    if (len(s) >= len(S)):
        issuperset = False


print(issuperset)            
