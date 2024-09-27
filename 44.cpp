#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void swap(string *s1,string *s2){
	string temp;
	temp=*s1;
	*s1=*s2;
	*s2=temp;
}
void sort_str(string s[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			int k=0,finish=0;
			while(finish!=1){
				if(s[j][k]>s[j+1][k]){
					swap(s[j],s[j+1]);
					finish++;
				}
				else if(s[j][k]==s[j+1][k])
					k++;
				else
					finish++;
			}
		}
	}
}

int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		if(i==1){
			string temp1,temp2;
			getline(cin,temp1);
			getline(cin,temp2);
		}
		string s[10000];
		int j=0;
		while(getline(cin,s[j])){
			if(s[j].empty())
				break;
			j++;
		}
		sort_str(s,j);
		int k,count=1;
		float precent;
		for(k=0;k<j;k++){
			if(s[k]==s[k+1])
				count++;
			else{
				cout<<s[k]<<" ";
				precent=(float)count/j;
				printf("%.4f\n",precent*100);
				count=1;
			}
		}
			
		if(i!=t)
		cout<<endl;	
	}
}


