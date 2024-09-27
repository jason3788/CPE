#include<iostream>
using namespace std;
double slove(double a,int b){
	if(b==0)
		return 1.0;
	else
		return a*slove(a,b-1);
}
int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		double n,w,j;
		double p;
		cin>>n>>p>>w;
		if(p==0)
			cout<<"0.0000"<<endl;
		else
			printf("%.4f\n",p*((slove(1-p,w-1))/(1-slove(1-p,n))));
	}
}
