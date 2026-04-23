vocab = []
flag = 1
while flag == 1:
    line = input()
    if line == "###":
        flag = 0
    else:
        vocab.append(line)

turns_taken = int(input())
g_history = []
c_history = []

q = 0
while q < turns_taken:
    g_history.append(input())
    c_history.append(input())
    q = q + 1

v_idx = 0
while v_idx < len(vocab):
    candidate = vocab[v_idx]
    survives = 1
    
    h_idx = 0
    while h_idx < turns_taken:
        old_g = g_history[h_idx]
        old_c = c_history[h_idx]
        
        fake_clue = ""
        step = 0
        while step < 5:
            if old_g[step] == candidate[step]:
                fake_clue = fake_clue + old_g[step]
            else:
                is_there = 0
                scan = 0
                while scan < 5:
                    if candidate[scan] == old_g[step]:
                        is_there = 1
                    scan = scan + 1
                
                if is_there == 1:
                    fake_clue = fake_clue + old_g[step].lower()
                else:
                    fake_clue = fake_clue + "."
            step = step + 1
            
        if fake_clue != old_c:
            survives = 0
            
        h_idx = h_idx + 1
        
    if survives == 1:
        print(candidate)
        
    v_idx = v_idx + 1