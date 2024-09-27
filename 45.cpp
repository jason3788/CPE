#include<iostream>
using namespace std;


int main(){
	int n,m,count=0;
	while(cin>>n>>m){
		if(n==0 && m==0)
			return 0;
		else{
			if(count!=0)
				cout<<endl;
			count++;
			cout<<"Field #"<<count<<":"<<endl;
		}		
		char a[n][m];
		int i,j;
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				cin>>a[i][j];
		int b[n][m]={};
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i][j]=='*'){
					if(i-1>=0 && j-1>=0)
						b[i-1][j-1]++;
					if(i-1>=0)
						b[i-1][j]++;
					if(i-1>=0 && j+1<m)
						b[i-1][j+1]++;
					if(j-1>=0)
						b[i][j-1]++;
					if(j+1<m)
						b[i][j+1]++;
					if(i+1<n && j-1>=0)
						b[i+1][j-1]++;
					if(i+1<n)
						b[i+1][j]++;
					if(i+1<n && j+1<m)
						b[i+1][j+1]++;	
				}		
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i][j]=='*')
					cout<<"*";
				else
					cout<<b[i][j];
			}
			cout<<endl;
		}
	}
}
