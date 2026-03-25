#statistics

a = float(input())
b = float(input())
c = float(input())
d = float(input())
mean = (a+b+c+d)/4
var = ((mean - a)**2+(mean - b)**2+(mean - c)**2 + (mean - d)**2)/4
std = var**(1/2)
print(mean,var,std)
