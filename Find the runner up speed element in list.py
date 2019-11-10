#sort the list and remove the max element 
#sort in reverse order and print the first element

       

if __name__ == '__main__':
    n = int(input())
    arr =list(map(int, input().split(" "))) 
    k = max(arr)
    for i in range(0,n):
        if max(arr) == k:   
            arr.remove(max(arr))
    arr.sort(reverse=True)
    print(arr[0])    

    

