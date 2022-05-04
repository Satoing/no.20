#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int list[n];
    for(int i=0;i<n;i++)
        cin>>list[i];
    long long sum=1;
    for(int i=0;i<n;i++){
        sum*=2;
        if(sum>998244353) sum%=998244353;
    }
    for(int i=0;i<n;i++){
        sum*=list[i];
        if(sum>998244353) sum%=998244353;
        for(int j=i+1;j<n;j++){
            long long temp=(list[i]+list[j])*(list[i]+list[j]);
            sum=(sum*temp)%998244353;
        }
    }
    cout<<sum;
    return 0;
}