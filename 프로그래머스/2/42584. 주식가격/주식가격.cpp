#include <bits/stdc++.h>
using namespace std;

/*
prices 2 - 100,000
가격이 해당시간 숫자보다 떨어지기 직전까지 cnt 해서 return

prices 를 

처음으로 떨어지기 시작한 순간까지 cnt 하면 된다.
숫자, 경과(or 들어온시간) 



1. for문 돌려가면서 해당숫자보다 떨어지는 순간들 잡고 하나하나 확인하는방법
=> 이중 for문 구조에 매개변수로 들어오는 prices의 최대가 100,000 이므로 시간복잡도 Over
2. sort 정렬해서 해당 숫자보다 작아지는 순간이 가장 먼저나오면 계산해서 return 
*/

vector<int> solution(vector<int> prices) {
    int size = prices.size();
    vector<int> answer(size);
    
    stack<int> st;
    
    for(int i = 0; i < size; i++){
        
        while(!st.empty() &&  prices[st.top()] > prices[i]){
            answer[st.top()] = i - st.top();
            st.pop();
        }
        
        st.push(i);
    }
    
    while(!st.empty()){
        answer[st.top()] = size - st.top() - 1;
        st.pop();
    }
    return answer;
}