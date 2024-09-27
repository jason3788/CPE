#include<iostream>
#include<string.h>
using namespace std;
int find_max(int arr[]){
	int i;
	int max=arr[0];
	for(i=1;i<26;i++){
		if(arr[i]>max)
			max=arr[i];
	}
	return max;
}
int main(){
	int t,arr[26]={0};
	cin>>t;
	string s;
	while(cin>>s){
		int i;
		for(i=0;i<s.length();i++){
			if(s[i]>='a' && s[i]<='z'){
				arr[ int(s[i])-97 ]++;
			}
				
			else if(s[i]>='A' && s[i]<='Z'){
				arr[int(s[i])-65]++;

			}
			
		}
	}
	
	int k,l;

	int max=find_max(arr);
	for(l=max;l>=1;l--){
		for(k=0;k<26;k++){
			if(arr[k]==l){
				cout<<char(k+65)<<" "<<arr[k]<<endl;
			}
		}
	}
	
}
