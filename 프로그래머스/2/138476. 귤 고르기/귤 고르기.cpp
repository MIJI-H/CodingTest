#include <bits/stdc++.h>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    map<int,int> m;
    vector<int>v;
    
    for(int i = 0; i < tangerine.size(); i++){
        m[tangerine[i]] ++;
    }
    for(auto u:m){
        v.push_back(u.second);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(), v.end());
    for( int i = 0; i < v.size(); i++){
        k -= v[i];
        if(k <= 0){
            answer = i + 1;
            break;
        }
       } 
 return answer;
    }