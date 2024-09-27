#include<iostream>
using namespace std;
int main(){
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++){
		int j,k;
		int a,b,n;
		cin>>a>>b>>n;
		if(i==1)
			cout<<a<<" "<<b<<" "<<n<<endl;
		char arr[a][b];
		for(j=0;j<a;j++){
			for(k=0;k<b;k++)
				cin>>arr[j][k];
		}
		for(j=1;j<=n;j++){
			int x,y;
			cin>>x>>y;
			int size=1;
			int temp=1,correct=0,tempx=x,tempy=y;
			int k,l;
			while(arr[x][y]==arr[x-size][y-size] && tempx>0 && tempy>0){
				size++;
				tempx--;
				tempy--;
			}
			while(correct!=1 && size>1){
				int stop=0;
				for(k=0;k<2*size-1;k++){
					for(l=0;l<2*size-1;l++){
						if(arr[tempx+k][tempy+l]!=arr[x][y] || tempx+k>=a || tempy+l>=b){
							size--;
							stop++;
							break;
						}
					}
					if(stop==1)
						break;
				}
				if(stop==0)
					correct++;
				else
					tempx++;
					tempy++;
			}
			cout<<size*2-1<<endl;
		}
	}
}
