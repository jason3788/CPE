#include<iostream>
#include<string>
using namespace std;



long long int fun(long long int a,long long int n){
	if(n==0){
		return 1;
	}
	long long int res=fun(a,n/2);
	if(n%2==1){
		return (res*res*a);
	}
	else{
		return (res*res);
	}
}



int main(){
	cout<<fun(2,10)<<endl;
} 
