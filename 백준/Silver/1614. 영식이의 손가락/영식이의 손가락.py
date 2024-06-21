import sys

n=int(input())
m=int(input())
answer=0

if n==1 or n==5: answer=(m*8)+(n-1)
elif n==3: answer=(m*4)+(n-1)
elif n==2:
    if m%2==0: answer=(m*5)-(m-n)-1
    else: answer=((m+1)/2*7)+(m-1)/2
elif n==4:
    if m%2==0: answer=(m*4)+(n-1);
    else: answer=(m*4)+1;

answer=int(answer)
print(answer)