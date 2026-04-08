n = int(input())

numbers = []

for i in range(n):
    numbers.append(int(input()))

numbers.sort()

if n % 2 == 1:
    median = numbers[n//2]
else:
    median = (numbers[n//2 - 1] + numbers[n//2]) / 2

print(median)