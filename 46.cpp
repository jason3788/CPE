#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0)
			return 0;
		int i,top=1,north=2,west=3;
		string s[n];
		for(i=0;i<n;i++){
			cin>>s[i];
			if(s[i]=="north"){
				int temp=north;
				north=top;
				top=7-temp;
			}
			else if(s[i]=="south"){
				int temp=top;
				top=north;
				north=7-temp;
			}
			else if(s[i]=="west"){
				int temp=top;
				top=7-west;
				west=temp;
			}
			else if(s[i]=="east"){
				int temp=top;
				top=west;
				west=7-temp;
			}
		}
		cout<<top<<endl;
	}
}


