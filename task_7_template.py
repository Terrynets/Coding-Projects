def read_dictionary():
    """
    Read in the dictionary from standard input and return it as a list
    :return: the dictionary
    """
    library = []
    gathering = 1
    while gathering == 1:
        entry = input().strip()
        if entry == "###":
            gathering = 0
        else:
            library.append(entry)
    return library


def compute_response(target, guess):
    """
    Given the hidden word and a guess, return a string representing whether the letters are correct (and in the correct
    place)
    :param target: the hidden word
    :param guess: the guess the user has just made
    :return: a string indicating how correct they are (see Task 6)
    """
    t_clean = target.strip()
    g_clean = guess.strip()
    
    tracker_list = []
    for ch in t_clean:
        tracker_list.append(ch)
        
    build_res = ["#", "#", "#", "#", "#"]
    
    p1 = 0
    while p1 < 5:
        if g_clean[p1] == tracker_list[p1]:
            build_res[p1] = g_clean[p1]
            tracker_list[p1] = "!"
        p1 = p1 + 1
        
    p2 = 0
    while p2 < 5:
        if build_res[p2] == "#":
            p3 = 0
            found_flag = 0
            while p3 < 5:
                if tracker_list[p3] == g_clean[p2] and found_flag == 0:
                    build_res[p2] = g_clean[p2].lower()
                    tracker_list[p3] = "!"
                    found_flag = 1
                p3 = p3 + 1
                
            if found_flag == 0:
                build_res[p2] = "."
        p2 = p2 + 1
        
    combined = ""
    for x in build_res:
        combined = combined + x
        
    return combined


def is_valid(guess, dictionary):
    """
    Given a guess by the user and the dictionary, determine whether the guess is a valid one to make (see Task 2)
    :param guess: the user's guess
    :param dictionary: a list of all words in the dictionary
    :return: True if the guess is valid; otherwise, return False
    """
    g_clean = guess.strip()
    status = False
    
    scan_idx = 0
    while scan_idx < len(dictionary):
        if dictionary[scan_idx] == g_clean:
            status = True
        scan_idx = scan_idx + 1
        
    return status

"""
DO NOT MODIFY ANY CODE BELOW THIS LINE
"""

import random

dictionary = read_dictionary()

rng = random.Random(0)

while True:

    choice = input("Play a game? (Y/N): ")
    if choice == 'N':
        break

    target = dictionary[rng.randint(0, len(dictionary) - 1)]
    turns = 0
    MAX_TURNS = 6
    while True:
        if turns == MAX_TURNS:
            print("Game over! :(")
            print('The word was: {}'.format(target))
            break
        else:
            guess = input()
            while not is_valid(guess, dictionary):
                print('{} is not a valid word!'.format(guess))
                guess = input()

            print("You guessed: {}".format(guess))
            response = compute_response(target, guess)
            print('Response: {}'.format(response))
            if response == guess:
                # we won!
                print("You win! :)")
                break
        turns += 1

