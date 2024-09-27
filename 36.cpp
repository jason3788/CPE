#include<iostream>
using namespace std;
int slove(int a,int b){
	int min;
	if(a>b)
		min=b;
	else
		min=a;
	int i;
	for(i=min;i>=1;i--){
		if(a%i==0 && b%i==0)
			return i;
	}
}
int main(){
	int n;
	while(cin>>n){
		if(n==0)
			return 0;
		int i,j,sum=0;
		for(i=1;i<n;i++)
			for(j=i+1;j<=n;j++){
				sum+=slove(i,j);
			}
		cout<<sum<<endl;
	}
}
