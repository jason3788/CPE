#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		string s;
		cin>>s;
		int finger[s.length()][11]={},j;
		for(j=0;j<s.length();j++){
			if(s[j]>='c' && s[j]<='g'){
				finger[j][2]++;
				finger[j][3]++;
				finger[j][4]++;
			}
			if(s[j]=='c'){
				finger[j][7]++;
				finger[j][8]++;
				finger[j][9]++;
				finger[j][10]++;
			}
			if(s[j]=='d'){
				finger[j][7]++;
				finger[j][8]++;
				finger[j][9]++;
			}
			if(s[j]=='e'){
				finger[j][7]++;
				finger[j][8]++;
			}
			if(s[j]=='f'){
				finger[j][7]++;
			}
			if(s[j]=='a'){
				finger[j][2]++;
				finger[j][3]++;
			}
			if(s[j]=='b'){
				finger[j][2]++;
			}
			if(s[j]=='C'){
				finger[j][3]++;
			}
			if(s[j]>='D' && s[j]<='G'){
				finger[j][1]++;
				finger[j][2]++;
				finger[j][3]++;
				finger[j][4]++;
			}
			if(s[j]=='D'){
				finger[j][7]++;
				finger[j][8]++;
				finger[j][9]++;
			}
			if(s[j]=='E'){
				finger[j][7]++;
				finger[j][8]++;
			}
			if(s[j]=='F'){
				finger[j][7]++;
			}
			if(s[j]=='A'){
				finger[j][1]++;
				finger[j][2]++;
				finger[j][3]++;
			}
			if(s[j]=='B'){
				finger[j][1]++;
				finger[j][2]++;
			}	
		}
		int k,l,count[11]={0};
		for(k=0;k<s.length()-1;k++){
			for(l=1;l<=10;l++){
				if(k==0 && finger[0][l]==1)
					count[l]++;
				if(finger[k][l]==0 && finger[k+1][l]==1)
					count[l]++;
			}
		}
		for(j=1;j<=10;j++){
			if(j==10)
				cout<<count[j];
			else
				cout<<count[j]<<" ";
		}	
		cout<<endl;
	}	
}

