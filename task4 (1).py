secret = input()
try_word = input()
bullseye = 0
missed_spot = 0

# Loop 1: ONLY check for exact matches
n = 0
while n < 5:
    if secret[n] == try_word[n]:
        bullseye = bullseye + 1
    n = n + 1

# Loop 2: ONLY check for wrong positions
m = 0
while m < 5:
    if secret[m] != try_word[m]: 
        k = 0
        match_found = 0
        while k < 5:
            if secret[k] == try_word[m]:
                match_found = 1
            k = k + 1
            
        if match_found == 1:
            missed_spot = missed_spot + 1
    m = m + 1

print(bullseye)
print(missed_spot)