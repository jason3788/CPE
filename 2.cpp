#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	int i;
	for(i=1;i<=t;i++){
		int n,j,k;
		cin>>n;
		int a[n];
		for(j=0;j<n;j++)
			cin>>a[j];
		sort(a,a+n);
		int mid=a[n/2],sum=0;
		for(k=0;k<n;k++)
			sum+=abs(mid-a[k]);
		cout<<sum<<endl;
			
	}
}
