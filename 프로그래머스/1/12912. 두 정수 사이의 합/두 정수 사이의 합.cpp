#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a == b) return a;
    
      else if(a > b) {
        while(a >= b){
            answer += b;
            b ++;
        }
        
    } else if(a < b){
        while(a <= b){
            answer += a;
            a ++;
        }
     
    }
        
    return answer;
}