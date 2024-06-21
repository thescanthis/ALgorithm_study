_len=int(64)
l=list()
while(1):
    if _len==1: break
    _len /= 2
    l.append(_len)
for i in range(len(l)): l[i]=int(l[i])
temp=int(input())
index=int(0)
cnt=int(0)

if temp==64: cnt=1
else:
    while (1):
        if temp == 0: break
        if temp < l[index]:
            index += 1
        elif temp >= l[index]:
            temp -= l[index]
            cnt += 1
print(cnt)