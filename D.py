
list1=input().split()
n=int(list1[0])
m=int(list1[1])
list1=[]
gro=[]
count=[]
list1=input().split()
for i in range(n):
     gro.append(int(list1[i]))
     count.append(1)
req=[]
list1=[]
list1=input().split()
for i in range(m):
    req.append(int(list1[i])-1)

for i in range(n):
    while gro[i]%3==0:
        gro[i]=int(gro[i]/3)
        count[i]=count[i]*3
list1=[]
sum=0
j=0

for i in range(m):
   while req[i]> j+sum+count[j]-1:
       sum=sum+count[j]-1
       j=j+1
   if    sum+j<=req[i]<=j+sum+count[j]-1:
    print(gro[j],end=" ")


