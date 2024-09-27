#include<iostream>
using namespace std;
void swap(int *a,int *b){
	long long int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int slove(int a[],int n,int m){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]%m==a[j+1]%m){
				if(a[j]%2==0 && abs(a[j+1])%2==1)
					swap(a[j],a[j+1]);
				else if(abs(a[j])%2==1 && abs(a[j+1])%2==1 && a[j+1]>a[j])
					swap(a[j],a[j+1]);
				else if(a[j]%2==0 && a[j+1]%2==0 && a[j+1]<a[j])
					swap(a[j],a[j+1]);
			}
			else if(a[j]%m>a[j+1]%m){
				swap(a[j],a[j+1]);
			}
		}
	}
	int k;
	for(k=0;k<n;k++){
		cout<<a[k]<<endl;
	}
}
int main(){
	int n,m;
	while(cin>>n>>m){
		if(n==0 && m==0){
			cout<<"0 0"<<endl;
			return 0;
		}
		cout<<n<<" "<<m<<endl;
		int a[n],i;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		slove(a,n,m);
	}
}
