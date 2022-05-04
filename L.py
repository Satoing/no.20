n=int(input())
for i in range(n):
    tring=input()
    truth=input()
    ans=""
    for j in range(5):
        if tring[j]==truth[j]:
            ans=ans+"g"
        else:
            if tring.count(tring[j])>truth.count(tring[j]):
                ans=ans+"x"
            else:
                ans=ans+"y"
    print(ans)