n = int(input())

marks = {}

for i in range(n):
    name = input()
    mark = int(input())
    marks[name] = mark

for name in sorted(marks):
    print(name, ":", marks[name])