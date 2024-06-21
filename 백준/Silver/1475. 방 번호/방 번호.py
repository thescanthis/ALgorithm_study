temp=input()
l=[]

for i in range(len(temp)):
    l.append(int(temp[i]))

l.sort()
max=int(0)
ans=int(0)
for i in range(10):
    index=int(0)
    for j in range(len(temp)):
        if i==l[j]: index+=1
    if i!=6 and i!=9 and max<=index:
        max=index
    else: ans+=index

if ans%2==0: ans/=2
else: ans=(ans+1)/2

print('%d'% ans if(max<=ans) else max)