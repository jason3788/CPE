#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int arr[n],i,j,k,count=0,a[n]={0};
		for(i=0;i<n;i++)
			cin>>arr[i];
		for(j=0;j<n-1;j++){
			for(k=1;k<=n-1;k++){
				if(abs(arr[j+1]-arr[j])==k){
					a[k]++;
					break;
				}	
			}	
		}
		int l;
		for(l=1;l<n;l++){
			if(a[l]==0){
				count++;
				cout<<"Not jolly"<<endl;
				break;
			}
		}
		if(count==0)
			cout<<"Jolly"<<endl;
	}
}
