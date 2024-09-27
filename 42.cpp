#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n=0;
	string w[100];
	while(getline(cin,w[n])){
		n++;
	}
	int k;
	for(k=0;k<n;k++){
		string s=w[k];
		int i,arr[129]={0};
		for(i=0;i<s.length();i++){
			arr[int(s[i])]++;
		}
		for(i=1;i<=1000;i++){
			int count=0,j;
			for(j=128;j>=32;j--){
				if(arr[j]==i){
					cout<<j<<" "<<arr[j]<<endl;
					arr[j]=0;
				}
				if(arr[j]==0)
					count++;
			}
			if(count==97)
				break;	
		}
		if(k!=n-1)
			cout<<endl;
	}
	
	
}
