#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool solution(int x) {
    bool answer = true;
    int temp = x;
    int sum = 0 ;
    while(x > 9){
        sum += x%10;
        x = x/10;
    }
    sum += x;
    if(temp % sum != 0) answer = false;
       else answer = true;
    return answer;
}