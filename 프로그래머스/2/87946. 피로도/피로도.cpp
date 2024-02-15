#include <bits/stdc++.h>
using namespace std;

//최소 필요 피로도, 소모 피로도
//하루에 한 번씩 탐험할 수 있는 던전이 여러개 
// 그 중 최대한 많이 탐험하려고 한다. 

// k라는 수치만큼 가지고 
int num;
bool c[9];

int dfs(vector<vector<int>> dungeons, int k, int cnt){
    num = max(num,cnt);
    
    for(int i = 0; i < dungeons.size(); i++){
        if(c[i]||dungeons[i][0] > k)continue;
        
        c[i] = 1;
        dfs(dungeons, k - dungeons[i][1], cnt + 1);
        c[i] =0;
    }
    return num;
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = 0;
    answer = dfs(dungeons,k,0);
    return answer;
}