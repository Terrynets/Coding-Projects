ans_word = input().strip()
guess_word = input().strip()

perfect_hits = 0
partial_hits = 0

loc = 0
while loc <= 4:
    if ans_word[loc] == guess_word[loc]:
        perfect_hits = perfect_hits + 1
    else:
        found_partial = "no"
        scan = 0
        while scan <= 4:
            if ans_word[scan] == guess_word[loc]:
                found_partial = "yes"
            scan = scan + 1
            
        if found_partial == "yes":
            partial_hits = partial_hits + 1
            
    loc = loc + 1
    
print(perfect_hits)
print(partial_hits)