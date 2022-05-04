#include<bits/stdc++.h>
using namespace std;

const int q[]={8,9,10};
struct element
{
    bool ok;
    int c[3];
}a[10010];

int main(){
    a[0].ok=true;
    queue<int> Q;
    Q.push(0);
    while(Q.size()){
        int x=Q.front();
        Q.pop();
        for(int i=0;i<3;i++){
            int w=q[i];
            if(x+w>10000||a[x+w].ok) continue;
            a[x+w]=a[x];
            a[x+w].c[i]++;
            Q.push(x+w);
        }
    }
    int n,m;
    cin>>n;
    while(n--){
        cin>>m;
        if(a[m].ok) for(int i=0;i<3;++i)
            cout<<a[m].c[i]<<' ';
        else cout<<-1;
        cout<<'\n';
    }
    return 0;
}