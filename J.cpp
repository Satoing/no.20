#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        bool flag=false,f=false;
        if(str[i][4]=='s'){
            str[i].erase(4,1);
            flag=true;
        }
        int j=7,m=7;
        while(str[i][m]!='/'){
            if(m<str[i].size()-1)
                m++;
            else if(m==str[i].size()-1){
                bool fl=false;
                while(j!=m){
                    if(str[i][j]=='.') str[i][j]='-';
                    if(str[i][j]==':'){
                        str[i][j]='-';
                        fl=true;
                    }
                    j++;
                }
                if(fl==true){
                    str[i].insert(j+1,"-p");
                    j+=2;
                }
                if(flag==true){
                    str[i].insert(j+1,"-s");
                    j+=2;
                }
                str[i].insert(j+1,".vpn.uestc.edu.cn:8118");
                f=true;
                break;
            }
        }
        if(f==true){
            f=false;
            continue;
        }
        while(str[i][j]!='/'){
            if(str[i][j]=='.') str[i][j]='-';
            if(str[i][j]==':'){
                str[i][j]='-';
                int k=j;
                while(str[i][k]!='/') k++;
                str[i].insert(k,"-p");
            }
            j++;
        }
        if(flag==true){
            str[i].insert(j,"-s");
            j+=2;
        }
        str[i].insert(j,".vpn.uestc.edu.cn:8118");
    }
    for(int i=0;i<n;i++)
        cout<<str[i]<<'\n';
    return 0;
}