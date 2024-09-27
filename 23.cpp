

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int c;
	cout<<int(sqrt(5))<<endl;
	int a,b;
	while(cin>>a>>b){
		if(a==0 && b==0)
			return 0;
		int i,j,count=0;
		for(i=a;i<=b;i++){
			int sq=sqrt(i);
			if(sq*sq==i){
				count++;
			}
		}
		cout<<count<<endl;
	}
}
