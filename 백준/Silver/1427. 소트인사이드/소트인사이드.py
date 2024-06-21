x=input()
l=[]
for i in range(len(x)):
    l.append(x[i])
l.sort()
l.reverse()
ans=str()
for i in range(len(l)):
    ans+=l[i]
answer=int(ans)
print(answer)