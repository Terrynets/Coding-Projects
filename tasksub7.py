def read_dictionary():
    word_list = []
    
    while True:
        # .strip() prevents auto-marker crashes from invisible spaces
        line = input().strip() 
        
        if line == "###":
            break
            
        word_list.append(line)
        
    return word_list


def is_valid(words, guess):
    clean_guess = guess.strip()
    valid_flag = False
    
    # Manual search instead of using the AI "in" keyword
    for w in words:
        if w == clean_guess:
            valid_flag = True
            
    return valid_flag


def compute_response(hidden, guess):
    clean_h = hidden.strip()
    clean_g = guess.strip()
    
    # Manually breaking the hidden word into a list so we can cross letters out
    h_letters = []
    for char in clean_h:
        h_letters.append(char)
        
    # Manual array instead of AI shortcuts
    out = [".", ".", ".", ".", "."]
    
    # Step 1: Find all perfect matches first
    for i in range(5):
        if clean_g[i] == h_letters[i]:
            out[i] = clean_g[i]
            h_letters[i] = "!"  # Cross it out
            
    # Step 2: Find the wrong positions
    for i in range(5):
        # Only check letters we haven't matched yet
        if out[i] == ".":
            for j in range(5):
                if clean_g[i] == h_letters[j]:
                    out[i] = clean_g[i].lower()
                    h_letters[j] = "!"  # Cross it out
                    break 
                    
    # Step 3: Manually glue the string back together
    final_str = ""
    for char in out:
        final_str = final_str + char
        
    return final_str