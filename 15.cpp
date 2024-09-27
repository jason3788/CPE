#include<iostream>
using namespace std;

int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		int m,d,start;
		cin>>m>>d;
		if(m==8)
			start=1;
		else if(m==2 || m==3 || m==11)
			start=2;
		else if(m==6)
			start=3;
		else if(m==9 || m==12)
			start=4;
		else if(m==4 || m==7)
			start=5;
		else if(m==5)
			start=7;
		else if(m==1 || m==10)
			start=6;
		start+=(d-1);
		start=start%7;
		if(start==0)
			cout<<"Sunday"<<endl;
		else if(start==1)
			cout<<"Monday"<<endl;
		else if(start==2)
			cout<<"Tuesday"<<endl;
		else if(start==3)
			cout<<"Wednesday"<<endl;
		else if(start==4)
			cout<<"Thursday"<<endl;
		else if(start==5)
			cout<<"Friday"<<endl;
		else if(start==6)
			cout<<"Saturday"<<endl;
	}
}
