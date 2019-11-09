L = []
N = int(input())
for i in range(0,N):
    t = input().split()

    if t[0] == "insert":
        L.insert(int(t[1]),int(t[2]))
    elif t[0] == "print":
        print(L)
    elif t[0] == "remove":
        L.remove(int(t[1]))    
    elif t[0] == "append":
        L.append(int(int(t[1])))
    elif t[0] == "sort":
        L.sort()
    elif t[0] == "pop":
        L.pop()
    elif t[0] == "reverse":
        L.reverse()    
