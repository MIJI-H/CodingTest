#include <bits/stdc++.h>
using namespace std;

//string 탐색하여 만들 수 있는 숫자를 생성
//   => 순열 만들수 있는 모든 수 생성
// 소수인지 판단, 맞다면 answer ++;
set<int> s;

bool checkPrime(int n){
    if(n<=1) return false;
    else{
        for(int i=2; i<=int(sqrt(double(n))); i++)
            if(n%i==0) return false;
    }
    
    return true;
}

int solution(string numbers) {    
    sort(numbers.begin(), numbers.end());
    
    do {
        for(int i=0; i<numbers.size(); i++){
            if(checkPrime(stoi(numbers.substr(0, i+1))))
                s.insert(stoi(numbers.substr(0, i+1)));
        }
    } while(next_permutation(numbers.begin(), numbers.end()));
    
    return s.size();
}