#include<iostream>
#include<string.h>
using namespace std;
int slove1(string s){
	int i,j,sum=0;
	for(i=0;i<s.length();i++){
		for(j=48;j<=57;j++){
			if(int(s[i])==j){
				sum+=j-48;
				break;
			}
		}
	}
	return sum;
}

int slove2(int n){
	int i,j,sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main(){
	string n;
	while(cin>>n){
		if(n[0]=='0')
			return 0;
		int count=0;
		int temp;
		temp=slove1(n);
		while(temp%9==0){
			if(temp==9){
				count++;
				break;
			}
			count++;
			temp=slove2(temp);
		}
		if(count>=1)
			cout<<n<<" is a multiple of 9 and has 9-degree "<<count<<"."<<endl;
		else
			cout<<n<<" is not a multiple of 9."<<endl;
	}
}
