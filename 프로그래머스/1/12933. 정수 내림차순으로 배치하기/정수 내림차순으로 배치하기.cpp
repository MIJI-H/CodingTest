#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string str = to_string(n);
    for(int i = 0 ; i < str.size();i ++){
        sort(str.rbegin(), str.rend());
    }
    answer = stoll(str);
    return answer;
}