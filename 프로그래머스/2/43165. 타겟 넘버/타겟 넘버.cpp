#include <bits/stdc++.h>
using namespace std;

//적절히 더하거나 빼서 타겟 넘버를 만들기
// 더해주거나 빼주거나



void dfs(vector<int>&numbers, int target, int&answer, int cnt = 0, int sum = 0){
     
    if(cnt == numbers.size() - 1){
        if(target == sum + numbers[cnt]) answer ++;
        if(target == sum - numbers[cnt]) answer ++;
        return;
    }
    dfs(numbers, target , answer, cnt + 1, sum + numbers[cnt]);
    dfs(numbers, target , answer, cnt + 1, sum - numbers[cnt]);

}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    dfs(numbers, target, answer);
    return answer;
}