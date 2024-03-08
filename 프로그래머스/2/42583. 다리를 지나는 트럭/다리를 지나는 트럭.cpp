#include <bits/stdc++.h>
using namespace std;


int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    
    int idx = 0;
    int weightSum = 0;
    queue<int> q;
    
    while(1){
        if(idx == truck_weights.size()){
            answer += bridge_length;
            break;
        }
        answer ++;
        int temp = truck_weights[idx];
        
        if(q.size() == bridge_length){
            weightSum -= q.front();
            q.pop();
        }
        if(weightSum + temp <= weight){
            weightSum += temp;
            q.push(temp);
            idx++;
        } else q.push(0);
    }
    return answer;
}