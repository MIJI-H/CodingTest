#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    string answer = "";
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ') {
            answer += ' ';
            j = 0;
        } else if (j == 0 && s[i] != ' '){
            answer += toupper(s[i]);
            j ++;
        } else if(j % 2 == 0){
            answer += toupper(s[i]);
            j ++;
        } else if (j % 2 == 1){ 
           answer += tolower(s[i]);
           j ++;
        }
        
    }
    return answer;
}