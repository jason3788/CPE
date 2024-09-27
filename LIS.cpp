#include<iostream>
#include<string.h>
using namespace std;

int arr[10000],count=0;

int LIS(){
	int length[count],i,j;
	for(i=0;i<count;i++){
		length[i]=1;
	}
	
	for(i=0;i<count;i++){
		for(j=0;j<i;j++){
			if(arr[i]>arr[j]){
				length[i]=max(length[i],length[j]+1);
			}
		}
	}
	
	int ans=0;
	for(i=0;i<count;i++){
		ans=max(ans,length[i]);
	}
	return ans;
}

int main(){
	while(cin>>arr[count]){
		count++;
	}
	cout<<LIS()<<endl;
	
}
