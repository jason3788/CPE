#include<iostream>
using namespace std;
int slove(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main(){
	int n;
	while(cin>>n){
		if(n==0)
			return 0;
		while(n>=10){
			n=slove(n);
		}
		cout<<n<<endl;
	}
}
