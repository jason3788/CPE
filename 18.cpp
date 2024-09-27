#include<iostream>
using namespace std;

int main(){
	long long int a,b;
	while(cin>>a>>b){
		long long int sum=0;
		while(sum<b){
			sum+=a;
			a++;
		}
		cout<<a-1<<endl;
	}
}
