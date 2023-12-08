#include<bits/stdc++.h>
using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long sum  = 0;
    for(int i = 1; i < count + 1; i ++){
        sum += i * price ;
    }
    
    if( money - sum >= 0) answer = 0;
      else answer = sum - money;
    return answer;
}