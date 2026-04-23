secret_w = input().strip()
guessed_w = input().strip()
bullseyes = 0

pointer = 4
while pointer >= 0:
    if secret_w[pointer] == guessed_w[pointer]:
        bullseyes = bullseyes + 1
    pointer = pointer - 1
    
print(bullseyes)