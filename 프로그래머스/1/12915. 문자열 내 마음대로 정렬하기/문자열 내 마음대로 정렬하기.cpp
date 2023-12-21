#include<bits/stdc++.h>
using namespace std;

int i;

bool compare(string s1, string s2){
    if(s1[i] == s2[i]){
        if(s1 < s2) return true;
         else return false;
    } else if( s1[i] < s2[i]) return true;
        else return false;
}
vector<string> solution(vector<string> strings, int n) {
    i = n;
    vector<string> answer = strings;
    sort(answer.begin(), answer.end(), compare);
    return answer;
    
}