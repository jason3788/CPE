#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int sort_time(int a[],int n){
	int i,j,count=0;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				count++;
			}
		}
	}
	return count;
}
int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		cout<<"Optimal train swapping takes ";
		int n,j;
		cin>>n;
		int a[n];
		for(j=0;j<n;j++)
			cin>>a[j];
		cout<<sort_time(a,n)<<" swaps."<<endl;
	}
}
