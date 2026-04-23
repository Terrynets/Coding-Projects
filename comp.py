def make_new_guess(words, previous_guesses, previous_feedback):
    total_played = 0
    for item in previous_guesses:
        total_played = total_played + 1
        
    if total_played == 0:
        return words[0]

    w_ptr = 0
    while w_ptr < len(words):
        test_candidate = words[w_ptr]
        survivor = 1
        
        h_ptr = 0
        while h_ptr < total_played:
            p_guess = previous_guesses[h_ptr]
            p_clue = previous_feedback[h_ptr]
            
            built_clue = ""
            c_idx = 0
            while c_idx < 5:
                if p_guess[c_idx] == test_candidate[c_idx]:
                    built_clue = built_clue + p_guess[c_idx]
                else:
                    letter_seen = 0
                    l_idx = 0
                    while l_idx < 5:
                        if test_candidate[l_idx] == p_guess[c_idx]:
                            letter_seen = 1
                        l_idx = l_idx + 1
                        
                    if letter_seen == 1:
                        built_clue = built_clue + p_guess[c_idx].lower()
                    else:
                        built_clue = built_clue + "."
                c_idx = c_idx + 1
                
            if built_clue != p_clue:
                survivor = 0
                
            h_ptr = h_ptr + 1
            
        if survivor == 1:
            return test_candidate
            
        w_ptr = w_ptr + 1
        
    return words[0]