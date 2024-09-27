#include<iostream>
using namespace std;

int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		cout<<"Case "<<i<<": ";
		int a,b;
		cin>>a>>b;
		int j,sum=0;
		for(j=a;j<=b;j++){
			if(j%2==1)
				sum+=j;
		}
		cout<<sum<<endl;
	}
}
