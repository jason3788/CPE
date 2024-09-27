#include<iostream>
#include<algorithm>
using namespace std;
int slove(int a[],int n,int j){
	int sum=0,i;
	for(i=0;i<n;i++){
		sum+=abs(a[i]-j);
	}
	return sum;
}
int main(){
	int n;
	while(cin>>n){
		int a[n],b[n],i;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			b[i]=slove(a,n,a[i]);
		}
		int min_index=0;
		for(i=1;i<n;i++){
			if(b[i]<b[min_index])
				min_index=i;
		}
		int min=a[min_index];
		int count=0;
		for(i=0;i<n;i++){
			if(b[i]==b[min_index])
				count++;
		}
		sort(a,a+n);
		int count2=0,c[n],temp=0;
		for(i=a[0];i<=a[n-1];i++){
			if(b[min_index]==slove(a,n,i))
				count2++;
		}
		cout<<min<<" "<<count<<" "<<count2<<endl;
	}
}
