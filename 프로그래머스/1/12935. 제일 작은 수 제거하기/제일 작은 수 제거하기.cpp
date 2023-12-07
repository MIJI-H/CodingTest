#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int m = *min_element(arr.begin(),arr.end());
    
    if(arr.size() == 1) answer.push_back(-1);
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != m) answer.push_back(arr[i]);
    }
    return answer;
}