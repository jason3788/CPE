#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string temp="qwertyuiop[]asdfghjkl;'zxcvbnm,.";
	string s;
	while(getline(cin,s)){
		int i,j;
		for(i=0;i<s.length();i++){
			for(j=0;j<temp.length();j++){
				if(s[i]==' '){
					cout<<" ";
					break;
				}
			
				else if(s[i]==temp[j] || int(s[i])== int(temp[j])-32){
					cout<<temp[j-2];
					break;
				}
			}
		}
		cout<<endl;
	}
}
