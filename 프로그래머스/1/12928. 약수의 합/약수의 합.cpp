#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int solution(int n) {
    int answer = 0;
    cin >> n;
    
    for(int i = 1; i < n + 1 ; i++){
        if( n%i == 0) answer = answer + i;
    }
    return answer;
}