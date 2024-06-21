n=int(input());m=int(input());
row=-1;col=0;value=1;lmt=0;sum=n*n;
l=[[0 for i in range(n)] for j in range(n)]

for i in range(n):
    for j in range(n-lmt):
        row+=value;
        l[row][col]=sum;
        sum-=1;

    for j in range(n-1-lmt):
        col+=value;
        l[row][col]=sum;
        sum-=1;
    value=-value;
    lmt+=1;

x=y=0;
for i in range(n):
    for j in range(n):
        print(l[i][j],end=' ')
        if m==l[i][j]: x=i+1;y=j+1;
    print()
print(x,y)