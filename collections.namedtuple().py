# Enter your code here. 

from collections import *

N = int(input())
col = ','.join(input().split())
Student = namedtuple('Student', col)

sum = 0

for i in range(N):
    l = input().split()
    student = Student(*l)
    sum = sum + int(student.MARKS)

print(sum/N)    
