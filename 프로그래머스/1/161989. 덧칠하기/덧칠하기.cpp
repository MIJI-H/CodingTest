#include <bits/stdc++.h>
using namespace std;

// 1 ~ n 개의 구역으로 나눔 (1미터 길이의 구역 )
// 롤러의 길이 m미터 
// 가장 적게 페인트칠을 해서 section을 다 칠하는 방법 


int solution(int n, int m, vector<int> section) {
    int answer = 1 , temp = section[0];
    
    for(int i = 0; i < section.size(); i ++){
        if( section[i] < temp + m ) continue;
          else{
              temp = section[i];
              answer ++;
          }
    }
    
    return answer;
}