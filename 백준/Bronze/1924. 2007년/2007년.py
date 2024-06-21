x=0;y=0
x,y=input().split(' ')
x=int(x); y=int(y)
d={0:31, 1:28, 2:31, 3:30, 4:31, 5:30,6:31,7:31, 8:30,9:31,10:30,11:31}

def Mos(x,y):
    temp=int()
    for i in d.keys():
        if i<x:
            if x==1: temp+=y
            else:
                temp+=d[i]
                if x-1==i:
                    temp-=d[i]
                    temp+=y
    if temp % 7 == 0: print('SUN')
    if temp % 7 == 1: print('MON')
    if temp % 7 == 2: print('TUE')
    if temp % 7 == 3: print('WED')
    if temp % 7 == 4: print('THU')
    if temp % 7 == 5: print('FRI')
    if temp % 7 == 6: print('SAT')
Mos(x,y)