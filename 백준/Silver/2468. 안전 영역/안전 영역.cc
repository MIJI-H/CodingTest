#include<bits/stdc++.h>
using namespace std;

const int mn = 101;
int n,a[mn][mn],visited[mn][mn],t,nx,ny,x,y,h;
int ret = 1;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

void dfs(int y,int x,int h){
	visited[y][x] =1;
	for(int i = 0; i < 4; i++){
        ny = y + dy[i]; 
        nx = x + dx[i]; 
        if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue; 
        if(!visited[ny][nx] && a[ny][nx] > h) dfs(ny, nx, h);
    }
    return;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n ;
	for(int i = 0; i < n; i++ ){
		for(int j = 0; j < n; j++){
			cin >> a[i][j] ;
		}
	}
	
	for(h = 1; h < mn; h ++){
		fill(&visited[0][0],&visited[0][0] + mn * mn, 0);
		int cnt = 0;
		for(int i = 0; i < n; i ++){
			for(int j = 0; j < n ; j++){
				if(a[i][j] > h && !visited[i][j]){
					dfs(i,j,h);
					cnt++;
				}
			}
		}
		ret = max(ret,cnt);
	} 
	cout << ret << "\n";
	return 0;
}
