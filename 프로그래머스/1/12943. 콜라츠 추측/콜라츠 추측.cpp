#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(int num) {
    long n = num;
    int answer = 0;
    
    while(n != 1){
        
       if(n % 2 == 0){
        n = n/2;
          
    }     else {
        n = (n * 3) + 1;
           
    }
    if(answer > 499) {
        answer = -1;
        break;
        
    }
        answer ++;
    }
    return answer;
}