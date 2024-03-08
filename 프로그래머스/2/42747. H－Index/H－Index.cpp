#include <bits/stdc++.h>
using namespace std;

// 오름차순 정렬 
// h번 이상 인용 => 탐색하며 해당 index 부터 끝까지가 h인지 확인
// 를 기록하기 위한 int 변수 지정 
//             =>  처음부터 해당 index까지  h미만인지 확인 
// 해당 h값을 return 

int solution(vector<int> citations) {
   int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>());
    for(int i = 0; i < citations.size(); i++)
    {
        if(citations[i] >= (i+1))
            answer++;
    }
    return answer;
}