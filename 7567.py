plat = input()
plat = list(plat)
height = 10
for i in range(1,len(plat)):
    if plat[i-1] != plat[i]:
        height = height + 10
    else:
        height = height +5
print(height)
