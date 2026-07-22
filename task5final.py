target = input().strip()
attempt = input().strip()
visual_out = ""

cursor = 0
while cursor < 5:
    if target[cursor] == attempt[cursor]:
        visual_out = visual_out + attempt[cursor]
    else:
        exists_elsewhere = 0
        checker = 0
        while checker < 5:
            if target[checker] == attempt[cursor]:
                exists_elsewhere = 1
            checker = checker + 1
            
        if exists_elsewhere == 1:
            visual_out = visual_out + attempt[cursor].lower()
        else:
            visual_out = visual_out + "."
            
    cursor = cursor + 1
    
print(visual_out)