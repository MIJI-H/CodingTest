#include <bits/stdc++.h>
using namespace std;


int solution(int k, int m, vector<int> score) {
    int answer= 0;
    int t = 0;
    
    if(score.size() % m == 0)  t = score.size() / m;
        else  t = (score.size() / m ) ;
    
    sort(score.rbegin(), score.rend());
 
        
    for(int i = 1; i < t + 1; i ++){
        answer += score[(i * m) - 1] * m;
    }
        
    return answer;
}