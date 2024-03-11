#include <bits/stdc++.h>
using namespace std;

//가장 맵지않은 스코빌 지수 + (두번째로 맵지않은 스코빌 지수 *2)
//모든음식이 k이상일때 까지 반복 
// 최소 횟수를 return
// 오름차순으로 정렬,우선순위 큐
// 1개 밖에 남지 않았을경우, 

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());
   
    
    while(pq.size() > 1 && pq.top() < K){
        int first = pq.top();
        pq.pop();
        int second = pq.top ();
        pq.pop();
        
        pq.push(first + (second * 2));
        answer ++;
    }
    
    if(pq.top() < K) return -1;
    return answer;
}

