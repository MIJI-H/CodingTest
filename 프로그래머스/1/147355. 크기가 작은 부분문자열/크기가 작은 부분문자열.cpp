#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int l = p.size();
    long long temp = 0;
    long long ip = stoll(p);
    
    for(int i = 0; i < t.size() - l + 1 ; i ++){
        temp = stoll(t.substr(i, l));
        if(temp <= ip) answer ++;
    }
   
    return answer;
}