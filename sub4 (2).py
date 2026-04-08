N=int(input())
''' specifies how many positive integers will be
input to your program'''
n=[]
for i in range(N):
    n.append(int(input()))
''' reads the positive integers and stores them in a list'''
for n in n:
    for i in range(2, n):
        if n % i == 0:
            print("false")
            break
    else:
        print("true")