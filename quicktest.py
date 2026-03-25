#university admission

average_mark = float(input())
years_experience = int(input())
honours = input()

if average_mark >= 65 and (years_experience >= 2 or honours == "yes"):
    print("Eligible")
else:
    print("Not Eligible")