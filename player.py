def make_new_guess(words, previous_guesses, previous_feedback):
    total_played = len(previous_guesses)
    
    # 1. Powerful Opening Guess (Saves massive amounts of time and drops your average score)
    if total_played == 0:
        for w in words:
            if w == "ARISE" or w == "STARE" or w == "ROAST":
                return w
        return words[0]

    possible_answers = []

    # 2. Filter the dictionary lightning fast
    for candidate in words:
        candidate_is_valid = True

        for turn_idx in range(total_played):
            past_g = previous_guesses[turn_idx]
            past_f = previous_feedback[turn_idx]

            test_feedback = ""
            for char_idx in range(5):
                if past_g[char_idx] == candidate[char_idx]:
                    test_feedback += past_g[char_idx]
                else:
                    letter_found = False
                    for search_idx in range(5):
                        if candidate[search_idx] == past_g[char_idx]:
                            letter_found = True

                    if letter_found:
                        test_feedback += past_g[char_idx].lower()
                    else:
                        test_feedback += "."

            # SPEED HACK: Stop checking immediately if it fails the clue to beat the 5-second timer
            if test_feedback != past_f:
                candidate_is_valid = False
                break 

        if candidate_is_valid:
            possible_answers.append(candidate)

    # 3. Failsafes
    if len(possible_answers) == 0:
        return words[0]
    if len(possible_answers) == 1:
        return possible_answers[0]

    # 4. The Heuristic: Score remaining words based on common letters
    max_score = -1 
    best_word = possible_answers[0]

    for cand in possible_answers:
        score = 0
        for letter in cand:
            # Check for the most common letters in English to eliminate maximum possibilities
            if letter in "AEIOURST":
                score += 1

        if score > max_score:
            max_score = score
            best_word = cand

    return best_word