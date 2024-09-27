#include<iostream>
#include<string>
using namespace std;


int lcs(string str1,string str2){
	int dp[str1.length()+1][str2.length()+1];
	
	int i,j;
	for(i=0;i<=str1.length();i++){
		for(j=0;j<=str2.length();j++){
			if(i==0 || j==0){
				dp[i][j]=0;
			}
			else if(str1[i-1]==str2[j-1]){
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	return dp[str1.length()][str2.length()];
}




int main(){
	string str1,str2;
	cin>>str1>>str2;
	cout<<LCS(str1,str2)<<endl;
} 
