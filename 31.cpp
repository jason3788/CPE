#include<iostream>
using namespace std;

int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		int d,count=0;
		cin>>d;
		int n;
		cin>>n;
		int a[n],j;
		for(j=0;j<n;j++)
			cin>>a[j];
		int k,l;
		for(k=1;k<=d;k++){
			if(k%7!=6 && k%7!=0){
				for(l=0;l<n;l++){
					if(k%a[l]==0){
						count++;
						break;
					}
				}
			}
		}
		cout<<count<<endl;
	}
}
