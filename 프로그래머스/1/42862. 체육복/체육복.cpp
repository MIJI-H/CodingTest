#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> student(n,1);
    
    for(auto l:lost) student[l - 1] --;
    for(auto r:reserve) student[r - 1] ++;
    
    for(int i = 0; i < student.size(); i++){
        if(student[i] == 0){
            if(i != 0 && student[i - 1] == 2){
                student[i - 1] --;
                student[i] ++;
            }
            else if(i != student.size() - 1 && student[i + 1] ==2){
                student[i + 1] --;
                student[i]++;
            }
        }
    }
    for(auto a:student){
        if(a != 0) answer ++;
    }
    return answer;
}