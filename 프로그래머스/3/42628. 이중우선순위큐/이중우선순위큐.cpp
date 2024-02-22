#include<bits/stdc++.h>
using namespace std;       

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> dpq;
    int cnt = 0;
    
    for(int i = 0; i <  operations.size(); i ++){
        string str = "";
        
        if(operations[i][0] == 'I'){
            for(int j = 2; j < operations[i].size(); j ++){
                str += operations[i][j];
            }
            int num = stoi(str);
            pq.push(num);
            dpq.push(num);
            cnt ++;
        } else if (operations[i] == "D 1"){
            if(cnt <= 1){
                pq = priority_queue<int> ();
                dpq = priority_queue<int, vector<int>, greater<int>>();
                cnt = 0;
            }
                else {
                pq.pop();
                cnt --;
            }
        } else if(operations[i] == "D -1"){
            if(cnt <= 1){
                pq = priority_queue<int> ();
                dpq = priority_queue<int, vector<int>, greater<int>>();
                cnt = 0;
            }
               else {
                dpq.pop();
                cnt --;
            }
        }
    }
    if(cnt <= 1 || pq.top() == dpq.top()) {
        answer.push_back(0);
        answer.push_back(0);
    } else {
        answer.push_back(pq.top());
        answer.push_back(dpq.top());
    }
    return answer;
}