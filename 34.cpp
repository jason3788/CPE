#include<iostream>
#include<math.h>
using namespace std;
int pow_fun(int n){
	int sum=1;
	int i;
	for(i=1;i<=n;i++)
		sum*=10;
	return sum;
}
int reverse(int n){
	int count=0,a[10],sum=0,i;
	while(n>0){
		a[count]=n%10;
		count++;
		n/=10;
	}
	for(i=0;i<count;i++){
		sum+=a[i]*pow_fun(count-i-1);
	}
	return sum;
}
int is_prime(int n){
	int count=0,i;
	for(i=1;i<=n;i++){
		if(n%i==0)
			count++;
	}
	if(count==2)
		return 1;
	else
		return 0;
}

int main(){
	int n;
	while(cin>>n){
		int a=n;
		int b=reverse(n);
		if(is_prime(a)==1){
			if(a==b)
				cout<<n<<" is prime."<<endl;
			else if(is_prime(b)==1){
				cout<<n<<" is emirp."<<endl;
			}
			else
				cout<<n<<" is prime."<<endl;
		}
		else
			cout<<n<<" is not prime."<<endl;
	}
}
