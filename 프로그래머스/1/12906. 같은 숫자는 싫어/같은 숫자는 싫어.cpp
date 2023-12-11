#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    queue <int> q;
    
    for(int i = 0; i < arr.size(); i++){
        q.push(arr[i]);
        if(i > 0 && arr[i - 1] == arr[i]){
            q.pop();
        } else if(i > 0 && arr[i - 1] != arr[i]){
            answer.push_back (q.front());
            q.pop();
        }
        
    }
    answer.push_back (q.front());
    return answer;
}