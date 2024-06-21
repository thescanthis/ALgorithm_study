n=int(input());

l=[[0 for _ in range(3)] for _ in range(n+1)]
l[1][0]=l[1][1]=l[1][2]=1;

for i in range(2,n+1):
    l[i][0]=(l[i-1][0]+l[i-1][1]+l[i-1][2])%9901
    l[i][1]=(l[i-1][0]+l[i-1][2])%9901
    l[i][2]=(l[i-1][0]+l[i-1][1])%9901
print(sum(l[n][0:3])%9901)