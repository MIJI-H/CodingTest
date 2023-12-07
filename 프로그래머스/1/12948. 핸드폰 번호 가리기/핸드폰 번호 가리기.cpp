#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string solution(string phone_number) {
    string answer = "";
    int num = phone_number.size();
    for(int i = 0; i < num - 4; i++){
        phone_number[i] = '*';
    }
    answer = phone_number;
    return answer;
}