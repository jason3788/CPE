#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){
	float x1,y1,x2,y2,x3,y3,x4,y4;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
		float a1,b1,a2,b2,a3,b3,x,y;
		if(x1==x3 && y1==y3){
			a1=x2;
			b1=y2;
			a2=x1;
			b2=y1;
			a3=x4;
			b3=y4;
		}
		else if(x1==x4 && y1==y4){
			a1=x2;
			b1=y2;
			a2=x1;
			b2=y1;
			a3=x3;
			b3=y3;
		}
		else if(x2==x3 && y2==y3){
			a1=x1;
			b1=y1;
			a2=x2;
			b2=y2;
			a3=x4;
			b3=y4;
		}
		else{
			a1=x1;
			b1=y1;
			a2=x2;
			b2=y2;
			a3=x3;
			b3=y3;
		}
		x=a1+a3-a2;
		y=b1+b3-b2;
		printf("%.3f %.3f\n",x,y);
	}
}
