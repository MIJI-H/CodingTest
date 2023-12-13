#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int answer = 0;
    int a = 1;
    vector <int> v;
    while(n > 2){
        v.push_back(n % 3);
        n /= 3;
    }
    v.push_back(n);
    for(int i = v.size() - 1; i >= 0; i--){
        answer += v[i] * a;
        a *= 3;
    }
    
    return answer;
}