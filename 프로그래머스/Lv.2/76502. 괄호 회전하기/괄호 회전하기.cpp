#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    int answer = 0;
    int len = s.size();
    s += s;
    
    for(int i = 0 ; i < len; i ++){
        stack<char> ss;
        int idx = i;
        while(idx < i + len){
            char c = s[idx ++];
            if(c == '[' || c == '{' || c =='(') ss.push(c);
               else if( c == ']'){
                   if(ss.top()=='[') ss.pop();
                    else ss.push(c);
               }else if(c=='}'){
                if(ss.top()=='{') ss.pop();
                else ss.push(c);
            }
            else if(c==')'){
                if(ss.top()=='(') ss.pop();
                else ss.push(c);
            }
          
        }
        if(ss.empty()) answer++;
    }
    
    return answer;
}