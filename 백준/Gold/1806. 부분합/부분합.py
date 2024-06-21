n,s=input().split(' '); n=int(n);s=int(s);
l=list(map(int,input().split(' ')))

len=n+1
start=end=size=0

while(1):
    if size>=s:
        len=min(len,end-start)
        size-=l[start]
        start+=1
    elif end==n: break
    else:
        size+=l[end]
        end+=1
if len==n+1: print(0)
else: print(len)