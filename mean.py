#calculating the mean

total=0
count=0

while True:
    num=float(input())
    if num==-1:
        break
    total=total+num
    count=count+1
average=total/count
print(average)