#include<bits/stdc++.h>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    
    for(int i = sum; i > 0; i --){
        if(sum % i == 0) {
            int w = i;
            int h = sum/i;
            
            if((w - 2) * (h - 2) == yellow){
                answer.push_back(w);
                answer.push_back(h);
                break;
            }
        }
    }
    return answer;
}