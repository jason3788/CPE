//uva11137 
#include<iostream>
#include<set>
#include<math.h>
using namespace std;

int main(){
	int coin[22],i;
	for(i=1;i<=21;i++){
		coin[i]=i*i*i;
	}
	
	long long int dp[10001]={};
	dp[0]=1;
	int j;
	for(i=1;i<=21;i++){
		for(j=coin[i];j<=10000;j++){
			dp[j]+=dp[j-coin[i]];
		}
	}
	
	int n;
	while(cin>>n){
		cout<<dp[n]<<endl;
	}
}
