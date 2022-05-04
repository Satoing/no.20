n=int(input())
peo=[]
for i in range(n):
    list1=input().split()
    if int(list1[0])==1 and not list1[1].isdecimal():
        peo.append(list1[1])
    else:
        ans=""
        m=int(list1[0])
        for j in range(1,m+1):
          if  list1[j].isdecimal() and not peo[int(list1[j])-1].isdeciaml():
                 ans=ans+peo[int(list1[j])-1]
          else:
              ans=ans+list1[j]
        peo.append(ans)
count=0
fin=peo[-1]
peo=[]
tar=input()
m=len(tar)
n=len(fin)
for i in range(n-m):
    if fin[i:i+m]==tar:
            count+=1
print(count%998244353)