#include<iostream>
#include<string.h>
using namespace std;
void slove(string s[],int t){
	int i,j;
	for(i=0;i<t-1;i++){
		for(j=0;j<t-i-1;j++){
			int k=0;
			while(k<s[j].length() && k<s[j+1].length() ){
				if(int(s[j][k]) > int(s[j+1][k]) ){
					string temp;
					temp=s[j];
					s[j]=s[j+1];
					s[j+1]=temp;
				}
				k++;
			}
		}
	}
	int count=1;
	for(i=0;i<t;i++){
		if(s[i]==s[i+1]){
			count++;
		}
		else{
			cout<<s[i]<<" "<<count<<endl;
			count=1;
		}
	}
		
}
int main(){
	int t,i;
	cin>>t;
	string s[t],s1,s2;
	for(i=0;i<t;i++){
		cin>>s[i]>>s1>>s2;
	}
	slove(s,t);
}
