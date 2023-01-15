x = int(input())
z=x
sum = 1
fac = 0
while x>0:
    y = x%10
    x = x//10
    for i in range(1,y+1):
        sum  = sum*i
    fac = fac +sum
print(fac)