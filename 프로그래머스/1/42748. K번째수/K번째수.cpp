#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    
    for(int i = 0; i < commands.size(); i ++){
        int s =  commands[i][0];
        int f = commands[i][1];
        int n = commands[i][2];
        temp.clear();
        for( int j = s - 1; j < f; j ++){
           temp.push_back(array[j]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[n-1]);
    }
    return answer;
}