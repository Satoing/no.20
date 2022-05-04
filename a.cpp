#include<bits/stdc++.h>
using namespace std;

long long getBit(long long m){
    m--;
    long long ans=0;
    while(m>=1){
        ans++;
        m/=2;
    }
    return ans;
}

int main(){
    long long t;
    cin>>t;
    long long m[t],n[t];
    for(long long i=0;i<t;i++)
        cin>>n[i]>>m[i];
    for(long long i=0;i<t;i++){
        long long nb=getBit(n[i]),mb=getBit(m[i]);
        cout<<(n[i]-1)+((m[i]-1)<<nb)<<'\n';
    }
    return 0;
}