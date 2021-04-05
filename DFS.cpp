#include <bits/stdc++.h>
using namespace std;

void DFS(int G[][7],int start,int n){
	static	int vis[7] = {0};
	if(G[start] == 0){
		cout<<start<<endl;
		vis[start] = 1;
		for(int j=1;j<n;j++){
			if(G[start][j] == 1 && vis[j]==0)
				DFS(G,j,n);
		}
	}
}
int main(){
	int G[7][7]={{0,0,0,0,0,0,0},
				 {0,0,1,1,0,0,0},
				 {0,1,0,0,1,0,0},
				 {0,1,0,0,1,0,0},
				 {0,0,1,1,0,1,1},
				 {0,0,0,0,1,0,0},
				 {0,0,0,0,1,0,0}
				};

	BFS(G,1,7);			
	return 0;
}