#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,s=0;
	while(cin>>n){
		s++;
		cout<<"Case #"<<s<<": ";
		int a[n];
		int i;
		for(i=0;i<n;i++)
			cin>>a[i];
		int j,k;
		int b[100]={0},count=0;
		for(j=0;j<n-1;j++){
			for(k=j;k<n;k++){
				b[count]=a[j]+a[k];
				count++;
			}
		}
		sort(b,b+count);
		int t=0;
		for(j=0;j<count-1;j++){
			if(b[j]==b[j+1]){
				cout<<"It is not a B2-Sequence."<<endl;
				t++;
				break;
			}
		}
		if(t==0)
				cout<<"It is a B2-Sequence."<<endl;
		cout<<endl;
	}
	
}
