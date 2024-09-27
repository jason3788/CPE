#include<iostream>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		int temp=a;
		int count=0,size=0;
		if(b==1){
			cout<<"Boring!"<<endl;
			count++;	
		}
		if(count==0){
			while(a>1){
				if(a%b!=0){
					cout<<"Boring!"<<endl;
					count++;
					break;
				}
				size++;
				a/=b;			
			}
		}
		
		int size2=0;
		if(count==0){
			while(temp>=1){
				size2++;
				if(size2==size+1)
					cout<<temp;
				else
					cout<<temp<<" ";
				temp/=b;
			}
			cout<<endl;
		}
	}
}
