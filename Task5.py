hid = input()
gues = input()
res = ""

for i in range(5):
    if hid[i] == gues[i]:
        res = res + gues[i].upper()            
    elif gues[i] in hid:
        res = res + gues[i].lower()    
    else:
        res = res + "."             

print(res)