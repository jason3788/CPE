#include<iostream> 
#include<string.h>
using namespace std;

int main(){
	string s[1000];
	int count=0;
	while(getline(cin,s[count])){
		count++;
	}
	int max_length=0,i;
	for(i=0;i<count;i++){
		if(s[i].length()>max_length)
			max_length=s[i].length();
	}
	int j,k;
	for(j=0;j<max_length;j++){
		for(k=count-1;k>=0;k--){
			if(j>s[k].length()-1){
				cout<<" ";
			}
			else
				cout<<s[k][j];
		}
		cout<<endl;
	}
}
