#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int b[100000];

void kmp_process(string str){
	int i=0,j=-1;
	b[0]=-1;
	
	while(i<str.length()){
		while(j>=0 && str[i]!=str[j]){
			j=b[j];
		}
		i++;
		j++;
		b[i]=j;
	}
}

int kmp(string str1,string str2){
	int i=0,j=0;
	while(i<str1.length()){
		while(j>=0 && str1[i]!=str2[j]){
			j=b[j];
		}
		i++;
		
		j++;
	}
	return j;
}


int main(){
	string str1;
	while(cin>>str1){
		memset(b,0,sizeof(b));
		string str2=str1;
		reverse(str2.begin(),str2.end());
		
		kmp_process(str2);
		int n=kmp(str1,str2);
		int i;
		for(i=n;i<str2.length();i++){
			str1+=str2[i];
		}
		cout<<str1<<endl;
	}
}
