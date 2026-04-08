lines = []

while True:
    x = input()
    if x == "###":
        break
    lines.append(x)

for i in range(len(lines)-1, -1, -1):
    print(lines[i])