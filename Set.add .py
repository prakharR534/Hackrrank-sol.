# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())

cont = set()
for _ in range(n):
  cont.add(input())

print(len(cont))  
