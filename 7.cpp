#include<iostream>
using namespace std;
int slove1(int n){
	int kuti=0,lakh=0,hajar=0,shata=0;
	while(n>=100){
		if(n>=10000000){
			kuti++;
			n-=10000000;
		}
		else if(n>=100000){
			lakh++;
			n-=100000;
		}
		else if(n>=1000){
			hajar++;
			n-=1000;
		}
		else if(n>=100){
			shata++;
			n-=100;
		}
	}
		if(kuti!=0 && lakh==0 && hajar==0 && shata==0 && n==0)
			cout<<kuti<<" kuti";
		else if(kuti!=0 && n==0)
			cout<<kuti<<" kuti ";
		if(lakh!=0 && hajar==0 && shata==0 && n==0)
			cout<<lakh<<" lakh";
		else if(lakh!=0)
			cout<<lakh<<" lakh ";
		if(hajar!=0 && shata==0 && n==0)
			cout<<hajar<<" hajar";
		else if(hajar!=0)
			cout<<hajar<<" hajar ";
		if(shata!=0 && n==0)
			cout<<shata<<" shata";
		else if(shata!=0)
			cout<<shata<<" shata ";
		if(n!=0)
			cout<<n;
}
int slove2(int n){
	int kuti=0,lakh=0,hajar=0,shata=0;
	while(n>=100){
		if(n>=10000000){
			kuti++;
			n-=10000000;
		}
		else if(n>=100000){
			lakh++;
			n-=100000;
		}
		else if(n>=1000){
			hajar++;
			n-=1000;
		}
		else if(n>=100){
			shata++;
			n-=100;
		}
	}
		if(kuti!=0)
			cout<<kuti<<" kuti ";
		if(lakh!=0)
			cout<<lakh<<" lakh ";
		if(hajar!=0)
			cout<<hajar<<" hajar ";
		if(shata!=0)
			cout<<shata<<" shata ";
		if(n!=0)
			cout<<n<<" ";
}
int main(){
	long long int n;
	int count=1;
	while(cin>>n){
		if(count<10)
			cout<<"   "<<count<<". ";
		else
			cout<<"  "<<count<<". ";
		count++;
		if(n==0){
			cout<<"0"<<endl;
		}
		if(n>=100000000){
			slove2(n/10000000);
			if(n%10000000==0)
				cout<<"kuti";
			else
				cout<<"kuti ";
			slove1(n%10000000);
		}
		else
			slove1(n);
		if(n!=0)
			cout<<endl;
	}
}
