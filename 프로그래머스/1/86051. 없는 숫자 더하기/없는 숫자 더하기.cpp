#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    int sum = 0;
    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
    }
    answer = 45 - sum;
    return answer;
}