# Enter your code here. Read input from STDIN. Print output to STDOUT

l = int(input())
s = set(map(int,input().split()))
n = int(input())

for i in range (n):
    (p, q)=input().split()
    s2=set(map(int,input().split()))


    if p == 'intersection_update':
        s.intersection_update(s2)
    elif p == 'update':
        s.update(s2)
    elif p== 'symmetric_difference_update':
        s.symmetric_difference_update(s2)
    elif  p=='difference_update':
        s.difference_update(s2)
print(sum(s))    


