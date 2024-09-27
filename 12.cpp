#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s1,s2;
	while(getline(cin,s1)){
		getline(cin,s2);
		int i,j,k;
		int a[26]={0},b[26]={0};
		for(i=0;i<s1.length();i++){
			a[int(s1[i])-97]++;
		}
		for(j=0;j<s2.length();j++){
			b[int(s2[j])-97]++;
		}
		for(k=0;k<26;k++){
			int l;
			if(a[k]!=0 && b[k]!=0){
				if(a[k]>=b[k]){
					for(l=1;l<=b[k];l++)
						cout<<char(k+97);
				}
				else if(a[k]<b[k]){
					for(l=1;l<=a[k];l++)
						cout<<char(k+97);
				}
			}
		}
		cout<<endl;
	}
}
