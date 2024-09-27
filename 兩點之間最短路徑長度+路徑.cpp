//�ϥ�Java���ҥͽЪ`�N�A�̥~�h�����O(class)�ݩR�W�� main �C
//�p�G�J��W�G�Q�������p�A�Ч��sĶ���լݬ�!! �U�sĶ���S�ʤ��P!!
//�w�]����B�H������B�T�w����O�Ψ����U�����Ϊ��C���ɡA�u�ݷt������O�_�q�L!!
#include<iostream>
using namespace std;

int path[200][200];
int mid[200][200];


void find_path(int s,int e){
	if(mid[s][e]==-1){
		return;
	}
	find_path(s,mid[s][e]);
	cout<<mid[s][e]<<" ";
	find_path(mid[s][e],e);
}


int main(){
	int c,s,q;
	while(cin>>c>>s>>q){
		
		
		int i,j;
		for(i=0;i<=c;i++){
			for(j=0;j<=c;j++){
				path[i][j]=9999999;
				mid[i][j]=-1;
			}
		}
		
		for(i=0;i<s;i++){
			int a,b,dis;
			cin>>a>>b>>dis;
			path[a][b]=dis;
			path[b][a]=dis;
		}
		
		int k;
		for(k=1;k<=c;k++){
			for(i=1;i<=c;i++){
				for(j=1;j<=c;j++){
					if(path[i][j]>path[i][k]+path[k][j]){
						path[i][j]=path[i][k]+path[k][j];
						mid[i][j]=k;
					}
				}
			}
		}
		
		cout<<path[1][4]<<endl;
		
		cout<<"1"<<" ";
		find_path(1,4);
		cout<<"4"<<endl;
	}
}
