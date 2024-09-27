//11624 
#include<iostream>
#include<string.h>
#include<queue>
using namespace std;

char map[1000][1000];
int a,b;

int fire[1000][1000];
int walk[1000][1000];

struct node{
	int r,c;
};

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

void bfs1(){
	queue<node> que;
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(map[i][j]=='F'){
				fire[i][j]=1;
				node n;
				n.r=i;
				n.c=j;
				que.push(n);
			}
		}
	}
	
	while(!que.empty()){
		int r=que.front().r;
		int c=que.front().c;
		que.pop();
		
		int i;
		for(i=0;i<4;i++){
			int x=r+dx[i];
			int y=c+dy[i];
			
			
			if((x<0 || x>=a) || (y<0 || y>=b)){
				continue;
			}
			if(map[x][y]=='#'){
				continue;
			}
			if(fire[x][y]!=0){
				continue;
			}
			
			fire[x][y]=fire[r][c]+1;
			node n;
			n.r=x;
			n.c=y;
			que.push(n);
		}
	}
}


int bfs2(){
	queue<node> que;
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(map[i][j]=='J'){
				walk[i][j]=1;
				node n;
				n.r=i;
				n.c=j;
				que.push(n);
			}
		}
	}
	while(!que.empty()){
		int r=que.front().r;
		int c=que.front().c;
		que.pop();
		
		if(r==0 || c==0 || r==a-1 || c==b-1){
			return walk[r][c]+1;
		}
		
		int i;
		for(i=0;i<4;i++){
			int x=r+dx[i];
			int y=c+dy[i];
			
			if((x<0 || x>=a) || (y<0 || y>=b)){
				continue;
			}
			if(map[x][y]=='#'){
				continue;
			}
			if(walk[x][y]>0){
				continue;
			}
			if(fire[x][y]<=walk[r][c]+1 && fire[x][y]!=0){
				continue;
			}
			
			walk[x][y]=walk[r][c]+1;
			node n;
			n.r=x;
			n.c=y;
			que.push(n);
		}
	}
	return -1;
}

int main(){
	int t,i;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>a>>b;
		int j,k;
		for(j=0;j<a;j++){
			for(k=0;k<b;k++){
				cin>>map[j][k];
			}
		}
		memset(fire,0,sizeof(fire));
		bfs1();
		
		memset(walk,0,sizeof(walk));
		int ans=bfs2();
		if(ans==-1){
			cout<<"IMPOSSIBLE"<<endl;
		}
		else{
			cout<<ans-1<<endl;
		}
	}
}
