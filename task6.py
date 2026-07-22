h = input()
g = input()

h_list = []
for char in h:
    h_list.append(char)

res = []
count = 0
while count < 5:
    res.append(".")
    count = count + 1

i = 0
while i < 5:
    if g[i] == h_list[i]:
        res[i] = g[i]
        h_list[i] = "!" 
    i = i + 1

i = 0
while i < 5:
    if res[i] == ".":
        j = 0
        found_match = False
        while j < 5:
            if found_match == False:
                if h_list[j] == g[i]:
                    res[i] = g[i].lower()
                    h_list[j] = "!" 
                    found_match = True
            j = j + 1
    i = i + 1

out = ""
for x in res:
    out = out + x
    
print(out)