# Enter your code here. Read input from STDIN. Print output to STDOUT
import re
n = int(input())
pattern = "^[789]"
for i in range (n):
    number = input()
    if len(number) == 10 and number.isdigit():
        ans=re.findall(pattern,number)
        if len(ans) == 1:
            print("YES")
        else :
              print("NO")

    else : 
        print("NO")


