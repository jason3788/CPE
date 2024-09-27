#include<iostream>
using namespace std;

int slove(int n,int empty,int i){
	int sum=0;
	while((n+empty)>=3){
		sum+=n;
		int temp=n;
		n=(n+empty)/3;
		empty=(temp+empty)%3;
	}
	sum+=n;
	if(i==1)
		return sum;
	else if(i==2)
		return empty;
	else
		return n;
}

int main(){
	int n;
	while(cin>>n){
		int empty;
		int i,max;
		for(empty=0;empty<=1;empty++){
			if(empty==0)
				max=slove(n,empty,1);
			else if(empty==slove(n,empty,2) || empty==slove(n,empty,3))
				max=slove(n,empty,1);
		}
		cout<<max<<endl;
	}
}
