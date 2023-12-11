#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string temp = "";
    int zerocnt = 0, tolcnt = 0;
    
    while(s != "1"){
        tolcnt ++;
        for(int i = 0; i < s.size(); i ++){
            if(s[i] == '1')temp += s[i];
              else zerocnt ++;
        }
        int templ = temp.size();
        temp.clear();
        s.clear();
        
        while(templ >= 1){
            s.insert(0, to_string(templ % 2));
            templ /= 2;
        }
    }
    
    answer.push_back(tolcnt);
    answer.push_back(zerocnt);
    return answer;
}