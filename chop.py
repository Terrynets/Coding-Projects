def read_dictionary():
    library = []
    gathering = 1
    while gathering == 1:
        entry = input().strip()
        if entry == "###":
            gathering = 0
        else:
            library.append(entry)
    return library


def is_valid(words, guess):
    g_clean = guess.strip()
    status = False
    
    scan_idx = 0
    while scan_idx < len(words):
        if words[scan_idx] == g_clean:
            status = True
        scan_idx = scan_idx + 1
        
    return status


def compute_response(hidden, guess):
    h_clean = hidden.strip()
    g_clean = guess.strip()
    
    tracker_list = []
    for ch in h_clean:
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