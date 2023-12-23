#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string temp = "";
    
    for(int i = 1; i < food.size(); i ++){
        int a = food[i] / 2;
        while(a){
            temp += to_string(i);
            a --;
         }
}
    answer = temp;
    answer += '0';
    reverse(temp.begin(), temp.end());
    answer += temp;
    return answer;
}