#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		if(s[0]=='0')
			return 0;
		int i,sum1=0,sum2=0;
		for(i=0;i<s.length();i++){
			if(i%2==0)
				sum1+=s[i]-48;
			else
				sum2+=s[i]-48;
		}
		if(abs(sum2-sum1)%11==0)
			cout<<s<<" is a multiple of 11."<<endl;
		else
			cout<<s<<" is not a multiple of 11."<<endl;
	}
}

