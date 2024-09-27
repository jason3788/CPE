#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
	double l,a;
	string s;
	while(cin>>l>>a>>s){
		double ans1,ans2;
		if(s=="min")
			a/=60;
		l+=6440;
		ans1=2*M_PI*l*(a/360);
		ans2=2*l*sin(a/2*(M_PI/180));
		printf("%.6f %.6f\n",ans1,ans2);
	} 
}


