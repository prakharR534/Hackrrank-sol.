# Enter your code here. Read input from STDIN. Print output to STDOUT

import re

s = input()
k = input()

matches = re.finditer(r'(?=(' + k + '))',s)

m = False

for match in matches:
    m = True
    print((match.start(1),match.end(1)-1))


if m == False:
    print((-1,-1))    
