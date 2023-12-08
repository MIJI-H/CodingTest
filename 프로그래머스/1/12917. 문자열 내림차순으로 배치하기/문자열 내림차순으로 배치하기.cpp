#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    string answer = "";
    vector <int> v;
    for(int i = 0; i < s.size(); i ++){
        int a = int(s[i]);
        v.push_back(a);
    }
    sort(v.rbegin(), v.rend());
    for(int i = 0; i < v.size(); i ++){
        answer += (char)v[i];
    }
    return answer;
}