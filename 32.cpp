#include<iostream>
#include<math.h>
using namespace std;
long long int binary(string s){
	int sum=0,count=0,i;
	for(i=0;i<s.length();i++){
		if(s[i]=='1'){
			sum+=pow(2,s.length()-i-1);
		}
	}
	return sum;
}


int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		cout<<"Pair #"<<i<<": ";
		long long int min,j,count=0,x,y;
		string a,b;
		cin>>a>>b;
		x=binary(a);
		y=binary(b);
		if(x>y)
			min=y;
		else 
			min=x;
		for(j=2;j<=min;j++){
			if(x%j==0 && y%j==0){
				cout<<"All you need is love!"<<endl;
				count++;
				break;
			}
		}
		if(count==0)
			cout<<"Love is not all you need!"<<endl;
	}
}
