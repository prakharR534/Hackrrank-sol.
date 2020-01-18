from collections import deque

d = deque()

for i in range(int(input())):
    a = input().strip().split()
    if (a[0] == 'append'):
        d.append(a[1])
    elif (a[0] == 'pop'):
        d.pop()
    elif (a[0] == 'popleft'):
        d.popleft()
    elif (a[0] == 'appendleft'):
        d.appendleft(a[1])

print (' '.join(d))
