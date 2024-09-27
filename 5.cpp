#include<iostream>
#include<algorithm>
using namespace std;
int slove(int a){
	int length=1;
	while(a!=1){
		if(a%2==1)
			a=3*a+1;
		else
			a/=2;
		length++;
	}
	return length;
}
int main(){
	int a,b;
	while(cin>>a>>b){
		cout<<a<<" "<<b<<" ";
		if(b<a){
			int temp;
			temp=a;
			a=b;
			b=temp;
		}
		int n=b-a+1;
		int i,arr[n],j=0;
		for(i=a;i<=b;i++){
			arr[j]=slove(i);
			j++;
		}
		sort(arr,arr+n);
		cout<<arr[n-1]<<endl;
	}	
}
