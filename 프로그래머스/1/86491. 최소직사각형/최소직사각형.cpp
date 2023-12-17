#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int l = sizes.size();
    vector<int> a;
    vector<int> b;
    
    for(int i = 0; i < l; i++){
        sort(sizes[i].begin(), sizes[i].end());
        }
    
    for(int i = 0; i < l; i ++){
        a.push_back(sizes[i][0]);
        b.push_back(sizes[i][1]);
    }
    answer = *max_element(a.begin(), a.end()) * *max_element(b.begin(),b.end());
    return answer;
}