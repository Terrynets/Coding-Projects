def read_dictionary():
    saved_text = []
    active = 1
    while active == 1:
        user_in = input()
        if user_in == "###":
            active = 0
        else:
            saved_text.append(user_in)
    return saved_text

def is_valid(words, guess):
    tracker = False
    position = 0
    limit = len(words)
    while position < limit:
        if words[position] == guess:
            tracker = True
        position = position + 1
    return tracker

def compute_response(hidden, guess):
    hid_chars = []
    idx = 0
    while idx < 5:
        hid_chars.append(hidden[idx])
        idx = idx + 1

    feedback = ["-", "-", "-", "-", "-"]

    p1 = 0
    while p1 < 5:
        if guess[p1] == hid_chars[p1]:
            feedback[p1] = guess[p1]
            hid_chars[p1] = "X"
        p1 = p1 + 1

    p2 = 0
    while p2 < 5:
        if feedback[p2] == "-":
            p3 = 0
            got_it = 0
            while p3 < 5:
                if hid_chars[p3] == guess[p2] and got_it == 0:
                    feedback[p2] = guess[p2].lower()
                    hid_chars[p3] = "X"
                    got_it = 1
                p3 = p3 + 1
            if got_it == 0:
                feedback[p2] = "."
        p2 = p2 + 1

    joined_str = ""
    for char in feedback:
        joined_str = joined_str + char
    return joined_str