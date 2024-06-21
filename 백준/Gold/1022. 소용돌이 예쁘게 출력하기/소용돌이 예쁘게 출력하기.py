r1,c1,r2,c2=map(int,input().split(' '))
l=[[0 for _ in range(51)] for _ in range(51)]
max=0
for i in range(r1,r2+1):
    for j in range(c1,c2+1):
        x=i-r1
        y=j-c1
        if i>j:
            if i+j>0: l[x][y] = (i*2+1)*(i*2+1)-i+j
            else: l[x][y] = (j*2)*(j*2)+i-j+1
        elif i==j:
            if i<=0 and j<=0: l[x][y] = (j*2)*(j*2)+1
            else: l[x][y]=(i*2+1)*(i*2+1)
        else:
            if i+j<0:
                l[x][y]=(i*2)*(i*2)-j+i+1
            else:
                l[x][y]=(j*2-1)*(j*2-1)+j-i
        if max<l[x][y]: max=l[x][y]
max=str(max)

for i in range(r2-r1+1):
    for j in range(c2-c1+1):
        print('%*d' % (len(max),l[i][j]),end=' ')
    print()