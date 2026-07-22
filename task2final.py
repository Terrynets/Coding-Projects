saved_dict = []
is_reading = "yes"

while is_reading == "yes":
    term = input().strip()
    if term == "###":
        is_reading = "no"
    else:
        saved_dict.append(term)
        
my_try = input().strip()
status_msg = "Invalid"

idx = len(saved_dict) - 1
while idx > -1:
    if saved_dict[idx] == my_try:
        status_msg = "Valid"
    idx = idx - 1
    
print(status_msg)