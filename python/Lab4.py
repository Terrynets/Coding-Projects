#finding the minimum

x=int(input())
minimum=x
while x!=-1:
    if minimum>x:
        minimum=x
    x=int(input())
print(minimum)
