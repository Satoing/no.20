list1=input().split()
n=int(list1[0])
m=int(list1[1])
count=[1 for i in range(n)]
s=input()
for i in range(m):
    list1=input().split()
    if int(list1[0])==1:
        for j in range(int(list1[1])-1,int(list1[2])):
            if s[j]==list1[3]:
                count[j]+=1
    else:
        x=y=0
        cfirst=int(list1[1])-1
        clast=int(list1[2])-1
        m=clast-cfirst+1
        for j in range(clast):
            if s[j]=="E":
                   x=x+count[j]
                   continue
            if s[j]=="W":
                   x=x-count[j]
                   continue
            if s[j]=="N":
                   y=y+count[j]
                   continue
            if s[j]=="S":
                   y=y-count[j]
                   continue
        if clast<=int(list1[3])-1:
            k=clast
            for j in range(clast,int(list1[3])):
                  if s[k]=="E":
                    x=x+count[k]
                    k=(k+1-cfirst)%m+cfirst
                    continue
                  if s[k]=="W":
                    x=x-count[k]
                    k=(k+1-cfirst)%m+cfirst
                    continue
                  if s[k]=="N":
                    y=y+count[k]
                    k=(k+1-cfirst)%m+cfirst
                    continue
                  if s[k]=="S":
                    y=y-count[k]
                    k=(k+1-cfirst)%m+cfirst
                    continue
        print(x,y)