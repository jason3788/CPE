#include<iostream> 
#include<algorithm>
using namespace std;
int slove(int cost[],int num,int k){
	int sum=0;
	while(num>0){
		int temp=num%k;
		sum+=cost[temp];
		num/=k;
	}
	return sum;
}
int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		cout<<"Case "<<i<<":"<<endl;
		int cost[36],j;
		for(j=0;j<36;j++)
			cin>>cost[j];
		int n,k;
		cin>>n;
		for(j=1;j<=n;j++){
			int num,arr[35];
			cin>>num;
			cout<<"Cheapest base(s) for number "<<num<<": ";
			for(k=2;k<=36;k++){
				arr[k-2]=slove(cost,num,k);
			}
			int temp[35];
			for(k=0;k<35;k++)
				temp[k]=arr[k];
			sort(arr,arr+35);
			int min=arr[0];
			int total=0,h=0;
			while(arr[h++]==min){
				if(h>=35)
					break;
				total++;
			}
			if(total==34)
				total++;
			int count=1;
			for(k=0;k<35;k++){
				if(temp[k]==min){
					if(count==total)
						cout<<k+2;
					else
						cout<<k+2<<" ";
					count++;
				}
			}
			cout<<endl;
		}
		if(i!=t)
			cout<<endl;
	}
}
