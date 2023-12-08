#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> a;
    string temp;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            a.push_back(stoi(temp));
            temp = "";
        } else{
            temp += s[i];
        }
    }
    a.push_back(stoi(temp));
    int mx = *max_element(a.begin(),a.end());
    int mn = *min_element(a.begin(),a.end());
  
    
    answer += to_string(mn) + " ";
    answer += to_string(mx);
    return answer;
}