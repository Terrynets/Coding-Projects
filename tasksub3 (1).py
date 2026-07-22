secret = input()
try_word = input()
tally = 0

step = 4
while step > -1:
    if secret[step] == try_word[step]:
        tally = tally + 1
    step = step - 1
    
print(tally)