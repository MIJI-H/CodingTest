#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    for(int i = 1; i < words.size(); i++){
       int f =  words[i - 1].size();
        
        if(words[i - 1][f - 1] != words[i][0]){
            return {(i%n)+1,(i/n)+1};
        } 
        for(int j = 0; j < i; j ++){
            if(words[j] == words[i]){
              return {(i%n)+1,(i/n)+1};
            }
            
        }
    }
 
        answer.push_back(0);
        answer.push_back(0);
    
    return answer;
}