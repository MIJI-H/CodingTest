#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int solution(int n)
{
    int answer = 0;
    
    while(n > 9){
        answer += n%10;
        n = n/10;
    }
    answer += n;

    return answer;
}