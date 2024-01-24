a = input()
al = len(a)
a1 = 0
a2 = 0
for i in range(al//2):
    a1 += int(a[i])
for i in range(1,al//2+1):
    a2 += int(a[-1 * i])
if a1 == a2:
    print("LUCKY")
else:
    print("READY")
