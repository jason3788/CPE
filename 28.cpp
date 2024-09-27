#include<iostream>
#include<math.h>
using namespace std;

int binary(int n){
	int size=0,a[50],i,count=0;
	while(n>0){
		a[size]=n%2;
		size++;
		n/=2;
	}
	for(i=size-1;i>=0;i--){
		if(a[i]==1)
			count++;
	}
	return count;
}
int hex(int n){
	int count=0,sum=0;
	while(n>0){
		sum+=(n%10)*pow(16,count);
		count++;
		n/=10;
	}
	return sum;
}


int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		int n,b1,b2;
		cin>>n;
		b1=hex(n);
		cout<<binary(n)<<" "<<binary(b1)<<endl;
	}
}
