//UVA - 12563 
#include<iostream>
#include<map>
#include<set>
using namespace std;

int main(){
	int t,i;
	cin>>t;
	for(i=0;i<t;i++){
		cout<<"Case "<<i+1<<": ";
		int n,time;
		cin>>n>>time;
		int arr[n],j;
		for(j=0;j<n;j++){
			cin>>arr[j];
		}
		
		int dp[time]={};
		dp[0]=1;
		
		int k;
		for(j=0;j<n;j++){
			for(k=time-1;k>=arr[j];k--){
				dp[k]=max(dp[k],dp[k-arr[j]]+1);
			}
		}
		
		
		int ans=0;
		int max_count=0;
		for(j=0;j<time;j++){
			if(dp[j]>=max_count){
				max_count=dp[j];
				ans=j;
			}
		}
		cout<<max_count<<" "<<ans+678<<endl;
	}
}
