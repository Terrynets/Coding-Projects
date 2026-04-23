c = 0
#input word until the word is ### break
while True:
    w = input()
    if w == "###":
        break
    c = c + 1

print(c)