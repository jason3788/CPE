#include<iostream>
using namespace std;
int binary(int n){
	cout<<"The parity of ";
	int count=0,a[50],size=0;
	while(n>0){
		a[size]=n%2;
		size++;
		if(n%2==1)
			count++;
		n/=2;
	}
	int i;
	for(i=size-1;i>=0;i--)
		cout<<a[i];
	cout<<" is "<<count<<" (mod 2)."<<endl;
}
int main(){
	int n;
	while(cin>>n){
		if(n==0)
			return 0;
		binary(n);
	}
}
