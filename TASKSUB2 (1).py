storage = []
keep_going = 1

while keep_going == 1:
    txt = input()
    if txt != "###":
        storage.append(txt)
    else:
        keep_going = 0

attempt = input()
status = "Invalid"

# Counting backwards from the end of the list
idx = len(storage) - 1
while idx >= 0:
    if storage[idx] == attempt:
        status = "Valid"
    idx = idx - 1
    
print(status)