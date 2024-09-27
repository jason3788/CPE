#include<iostream>
using namespace std;
int slove(int a,int b){
	int sum=0;
	int carry=0;
	while(a>0 || b>0){
		if((a%10)+(b%10)+carry>=10)
			sum+=1;
		carry=((a%10)+(b%10)+carry)/10;
		a/=10;
		b/=10;
		
	}
	if(sum==0){
		cout<<"No carry operation."<<endl;
	}
	else if(sum==1)
		cout<<sum<<" carry operation."<<endl;
	else
		cout<<sum<<" carry operations."<<endl;
}
int main(){
	int a,b;
	while(cin>>a>>b){
		if(a==0 && b==0)
			return 0;
			slove(a,b);
	}
}
	
