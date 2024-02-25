#include<bits/stdc++.h>
using namespace std;

bool c[101][101];
int bfsMap[101][101];
int m, n;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
queue<pair<int,int>> q;

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    n = maps[0].size();
    m = maps.size();
    
    q.push(make_pair(0,0));
    c[0][0] = true;
    bfsMap[0][0] = 1;
    
    while(!q.empty()){
        int curX = q.front().first;
        int curY = q.front().second;
        
        q.pop();
        
        for(int i = 0; i < 4; i++){
            int nx = curX + dx[i];
            int ny = curY + dy[i];
            
            if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
            if(c[nx][ny]) continue;
            if(maps[nx][ny] == 0) continue;
            
            c[nx][ny] = true;
            q.push(make_pair(nx,ny));
            bfsMap[nx][ny] = bfsMap[curX][curY] + 1;
            
        }
    }
    
    if(!bfsMap[m - 1][n - 1]) answer = -1;
      else answer = bfsMap[m - 1][n - 1];
    
    return answer;
}