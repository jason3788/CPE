#include<iostream>
using namespace std;

int main(){
	long long int t,i,j,fib[50];
	cin>>t;
	fib[0]=1;
	fib[1]=2;
	for(j=2;j<50;j++){
		fib[j]=fib[j-1]+fib[j-2];
	}
	for(i=1;i<=t;i++){
		int n,b[50]={0};
		cin>>n;
		cout<<n<<" = ";
		int count;
		for(j=0;j<50;j++){
			if(n<fib[j]){
				count=j-1;
				break;
			}
		}
		int k=0;
		while(count>=0){
			if(n>=fib[count]){
				n=n-fib[count];
				b[k]=1;
			}
			else
				b[k]=0;
			k++;
			count--;
		}
		for(j=0;j<k;j++)
			cout<<b[j];
		cout<<" (fib)"<<endl;
	}
}
