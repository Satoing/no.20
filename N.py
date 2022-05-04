n=int(input())
list1=input().split()
sum=1
for i in range(n):
  sum=(sum*2)%998244353
for i in range(n):
  sum=(sum*int(list1[i]))%998244353
  for j in range(i+1,n):
    sum=sum*(int(list1[i])+int(list1[j]))%998244353
    sum=sum*(int(list1[i])+int(list1[j]))%998244353
print(sum)