#include<bits/stdc++.h>
#define mod 998244353
using namespace std;
int dp[1<<20][20],n,m,k,s[20][20],F[20];
void upd(int& x,int y){
	if((x+=y)>=mod)x-=mod;
}
int main(){
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1,u,v;i<=m;++i){
		scanf("%d%d",&u,&v);
		u--,v--,s[u][v]=s[v][u]=1;
	}
	for(int i=0;i<n;++i)dp[1<<i][i]=1;
	for(int i=1;i<(1<<n);++i){
		int x=__builtin_ctz(i&-i);
		for(int j=x;j<n;++j)if(dp[i][j])
			for(int k=x+1;k<n;++k)if(s[j][k]&&(i>>k&1)==0)
				upd(dp[i|(1<<k)][k],dp[i][j]);
	}
	for(int i=1;i<(1<<n);++i)if(__builtin_popcount(i)>2){
		int len=__builtin_popcount(i);
		int x=__builtin_ctz(i&-i);
		for(int j=x+1;j<n;++j)if(s[x][j])
			upd(F[len%k],dp[i][j]);
	}
	for(int i=0;i<k;++i)printf("%d\n",1ll*(mod+1)/2*F[i]%mod);
} 