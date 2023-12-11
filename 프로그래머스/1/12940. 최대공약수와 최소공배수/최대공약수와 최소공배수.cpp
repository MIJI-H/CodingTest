#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    int a = max(n,m);
    int b = min(n,m);
    while(a % b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    answer.push_back(b);
    answer.push_back ((n * m)/b);
    return answer;
}