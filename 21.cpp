#include<iostream>
using namespace std;

int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		int a,b;
		cin>>a>>b;
		int x,y;
		x=(a+b)/2;
		y=a-x;
		if( x>=0 && y>=0 && (a+b)%2==0)
			cout<<x<<" "<<y<<endl;
		else
			cout<<"impossible"<<endl;
	}
}
