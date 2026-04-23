hidden_str = input().strip()
guess_str = input().strip()

h_arr = []
c = 0
while c < 5:
    h_arr.append(hidden_str[c])
    c = c + 1
    
final_arr = ["#", "#", "#", "#", "#"]

idx1 = 0
while idx1 < 5:
    if guess_str[idx1] == h_arr[idx1]:
        final_arr[idx1] = guess_str[idx1]
        h_arr[idx1] = "0" 
    idx1 = idx1 + 1
    
idx2 = 0
while idx2 < 5:
    if final_arr[idx2] == "#":
        idx3 = 0
        matched = 0
        while idx3 < 5:
            if h_arr[idx3] == guess_str[idx2] and matched == 0:
                final_arr[idx2] = guess_str[idx2].lower()
                h_arr[idx3] = "0"
                matched = 1
            idx3 = idx3 + 1
            
        if matched == 0:
            final_arr[idx2] = "."
    idx2 = idx2 + 1
    
output_res = ""
for item in final_arr:
    output_res = output_res + item
    
print(output_res)