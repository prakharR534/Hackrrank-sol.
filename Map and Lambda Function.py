cube = lambda x: x **3 

def fibonacci(n):
    # return a list of fibonacci numbers
    list = [0,1]
    for i in range(2,n):
        list.append(list[i-1]+list[i-2])
    return(list[0:n])    


if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))
