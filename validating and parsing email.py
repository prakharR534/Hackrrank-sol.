# Enter your code here. Read input from STDIN. Print output to STDOUT
import re

n = int(input())

for i in range(n):
    line = input()
    name,email = line.split(' ')
    p = ("<[a-z][a-zA-Z0-9\-\.\_]+@[a-zA-Z]+\.[a-zA-Z]{1,3}>")

    if bool(re.match(p,email)):
        print(name,email)
