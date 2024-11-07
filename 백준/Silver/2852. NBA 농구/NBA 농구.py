n=int(input())
team=[]
time=[]
G=10
for i in range(n):
    x=input()
    sum=0
    for j in range(len(x)):
        if j==0: team.append(int(x[j]))
        elif j==2: v=int(x[j]);v*=10*60;sum+=v
        elif j==3: v=int(x[j]); sum+=v*60
        elif j==5: v=int(x[j]); sum+=v*10
        elif j==6: v=int(x[j]); sum+=v
    time.append(sum)
time.append(0); team.append(0)
red=blue=cnt=r=b=0
for i in range(0,2881):
    if red>blue: r+=1
    if red<blue: b+=1
    if team[cnt]==1:
        if time[cnt]==i:
            red+=1
            cnt+=1
    if team[cnt]==2:
        if time[cnt]==i:
            blue+=1
            cnt+=1
r_minute=int(r/60)
r_second=int(r%60)
b_minute=int(b/60)
b_second=int(b%60)

print("%02d:%02d"% (r_minute,r_second))
print("%02d:%02d"%(b_minute,b_second))