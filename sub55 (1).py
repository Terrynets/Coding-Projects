import math

def schmerg(x, y):
    # for understanding breaking the fraction would assist
    top = (x * y) + (math.sin(x) * math.cos(x) * math.tan(x)) + ((x + 65314) / (96 * y))
    bottom = (x**2 * y**-3) + math.log(y + 12)
    
    return top / bottom

# le get the input number
x = float(input())

# after breaking down the expression into parts, we can calculate the final answer
part1 = schmerg(0.5 * x, 0.7 * x)
left_side = schmerg(x, part1)
right_side = schmerg(x + 1, x - 1)

ans = schmerg(left_side, right_side)

print(ans)