#include <bits/stdc++.h>
using namespace std;

void BFS(int G[][7],int start,int n){
	bool visited = {false};
	queue<int> q;
	cout<<start<<endl;
	visited[start] = true;
	q.push_back(start);
	while(!q.isEmpty()){
		int i= q.front();
		q.pop();
		for(int j=1;j<n;j++){
			if(G[i][j] == 1 && visited[j]==false){
				cout<<j<<endl;
				visited[j] = false;
				q.push_back(j);
			}
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