n = int(input())

stud = list()
for i in range(n):
    stud.append([input(),float(input())])

score = set([stud[x][1] for x in range(n)])
score = list(score)
score.sort()

stud = [x[0] for x in stud if x[1] == score[1]]
stud.sort()

for s in stud:
    print(s)
