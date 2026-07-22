h = input()  
g = input()  
c = 0        
#should check letter in the same i 
for i in range(5):
    if h[i] == g[i]:
        c = c + 1

print(c)