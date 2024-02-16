#include <bits/stdc++.h>
using namespace std;

//3개의 수를 더했을 때 소수가 되는 경우의 개수 
// 1. 3개를 선택하는 것 , 2. 그것의 합이 소수라면 cnt ++

int solution(vector<int> nums) {
    int answer = 0;
    vector<int> sums;
    
    for(int i = 0; i < nums.size() - 2; i ++){
        for(int j = i + 1; j < nums.size() - 1; j ++)
            for(int k = j + 1; k < nums.size(); k ++){
                sums.push_back(nums[i] + nums[j] + nums[k]);
                
            }
    }
    
    for(int i = 0; i < sums.size(); i ++){
        int sum = sums[i];
        bool c = true;
        
        for(int j = 2; j <= sum/2; j ++){
            if(sum % j == 0) {
                c = false;
                break;
            }
        }
        if(c == true) answer ++;
            
    }

    return answer;
}