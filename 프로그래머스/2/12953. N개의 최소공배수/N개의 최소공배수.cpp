#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> arr) {
    int answer,temp,i = 0;
    bool check = true;
    sort(arr.begin(),arr.end());
    
    while(check){
        i++;
        temp = arr.back() * i;
        
        for(int j = 0; j < arr.size() - 1; j++){
            if(temp % arr[j] != 0) break;
            if(j == arr.size() - 2)
            {answer = temp;
            check = false;}
            }
        
    }
    return answer;
}