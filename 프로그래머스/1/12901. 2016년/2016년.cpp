#include <bits/stdc++.h>
using namespace std;

string solution(int a, int b) {
    string answer = "";
    string week[7] = {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    int month[12] = {0,31,29,31,30,31,30,31,31,30,31,30};
    int days = 0;
    
    for(int i = 0; i < a; i ++){
        days += month[i];
    }
    days += b - 1;
    answer = week[days % 7];
    return answer;
}