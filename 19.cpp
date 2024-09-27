#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int slove(int x,int a[],int count){
	int sum=0;
	int i;
	for(i=count;i>=1;i--){
		sum+=a[count-i]*(i-1)*pow(x,i-2);
	}
	return sum;
}
int main(){
	int x;
	while(cin>>x){
		int a[50],i;
		for(i=0;;i++){
			cin>>a[i];
			if(getchar()=='\n')
				break;
		}
		int count=i+1;
		cout<<slove(x,a,count)<<endl;
	}
}
