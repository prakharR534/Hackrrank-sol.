# Enter your code here. Read input from STDIN. Print output to STDOUT
a = map(int, raw_input().split())
b = [map(float, raw_input().split()) for i in range(a[1])]
for i in zip(*b):
    print sum(i)/a[1]
