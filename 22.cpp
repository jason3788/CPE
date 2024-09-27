#include<iostream>
using namespace std;

int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
	 	cout<<"Test #"<<i<<": ";
		char temp1,temp2;
		int n,count=0;
		cin>>temp1>>temp2>>n;
		int arr[n][n],j,k;
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				cin>>arr[j][k];
			}
		}
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				if(arr[j][k]<0){
					cout<<"Non-symmetric."<<endl;
					count++;
					break;
				}
			}
			if(count==1){
				break;
			}
		}
		if(count==0){
			for(j=0;j<n/2;j++){
				for(k=0;k<n;k++){
					if(arr[j][k]!=arr[n-j-1][n-k-1]){
						cout<<"Non-symmetric."<<endl;
						count++;
						break;
					}
				}
			if(count==1)
				break;
			}
		}
		
		if(count==0){
			if(n%2==1){
				int mid=(n/2)+1;
				for(j=0;j<j/2;j++)
					if(arr[mid][j]!=arr[mid][n-j-1]){
						cout<<"Non-symmetric."<<endl;
						count++;
						break;
					}
			}
		}
		if(count==0)
			cout<<"Symmetric."<<endl;
	

	}
}
