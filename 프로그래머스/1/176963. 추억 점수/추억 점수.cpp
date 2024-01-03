#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    int temp = 0;
    
    for(int i = 0; i < photo.size(); i++){
        for(int j = 0; j < photo[i].size(); j++){
           if(find(name.begin(), name.end(), photo[i][j]) != name.end()){
               temp += yearning[find(name.begin(), name.end(),photo[i][j]) - name.begin()];
           }
            
        }
        answer.push_back(temp);
        temp = 0;
    }
    return answer;
}