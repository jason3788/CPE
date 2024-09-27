#include<iostream>
using namespace std;

int slove(int x1,int y1,int x2,int y2){
	int sum=0;
	int a=x1+y1+2;
	int step=(x2+y2)-(x1+y1);
	while(step>0){
		x1++;
		sum+=a;
		a+=1;
		step--;
	}
	if(x1>x2)
		sum-=x1-x2;
	else
		sum+=x2-x1;
	return sum;
}

int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		cout<<"Case "<<i<<": ";
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<slove(x1,y1,x2,y2)<<endl;
	}
}
