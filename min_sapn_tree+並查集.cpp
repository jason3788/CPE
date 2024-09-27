//UVA - 10397
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<math.h>
using namespace std;

struct point{
	double x;
	double y;
};
point p[800];

struct edge{
	int p1;
	int p2;
	double dis;
};
edge e[562500];

int sets[755];
int r[755];

void set_inital(int a,int b){
	int i;
	for(i=a;i<=b;i++){
		sets[i]=i;
		r[i]=0;
	}
}


int set_find(int a){
	if(a!=sets[a]){
		sets[a]=set_find(sets[a]);
	}
	return sets[a];
}

void set_union(int a,int b){
	if(r[a]<r[b]){
		sets[a]=b;
	}
	else{
		if(r[a]==r[b]){
			r[a]++;
		}
		sets[b]=a;
	}
}

bool cmp(edge a,edge b){
	return a.dis<b.dis;
}

double min_span(int n,int e_count){
	set_inital(1,n);
	sort(e,e+e_count,cmp);
	double sum=0;
	int i,j;
	for(i=0;i<e_count;i++){
		int a=set_find(e[i].p1);
		int b=set_find(e[i].p2);
		
		if(a!=b){
			set_union(a,b);
			sum+=e[i].dis;
		}
	}
	return sum;
}


double distance(int a,int b){
	return sqrt((abs(p[a-1].x-p[b-1].x))*(abs(p[a-1].x-p[b-1].x))+(abs(p[a-1].y-p[b-1].y))*(abs(p[a-1].y-p[b-1].y)));
}

int main(){
	int n;
	while(cin>>n){
		int i,j;
		
		
		for(i=0;i<n;i++){
			cin>>p[i].x>>p[i].y;
		}
		
		int t,finish[n+1][n+1]={};
		cin>>t;
		for(i=0;i<t;i++){
			int a,b;
			cin>>a>>b;
			finish[a][b]=1;
			finish[b][a]=1;
		}
		
		int e_count=0;
		for(i=1;i<=n;i++){
			for(j=1;j<i;j++){
				e[e_count].p1=i;
				e[e_count].p2=j;
				if(finish[i][j]==1){
					e[e_count].dis=0;
				}
				else{
					e[e_count].dis=distance(i,j);
				}
				e_count++;
			}
		}
		cout<<fixed<<setprecision(2)<<min_span(n,e_count)<<endl;
	}
}
