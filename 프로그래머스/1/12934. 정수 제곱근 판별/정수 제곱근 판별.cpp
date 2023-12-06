#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

long long solution(long long n) {
    long long answer = -1;
    
    for(long long i = 0; i <= n; i++){
        if(i*i == n) {
            answer = (i + 1)*(i + 1);
            break;
        } 
        }
          
    
    return answer;
}