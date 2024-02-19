#include <bits/stdc++.h>
using namespace std;

// 한 번호가 다른 번호의 접두어인 경우가 있는지를 확인 
// string의 길이가 짧은 것이 긴것의 앞부분에 해당되는지를 판단 
// 원소 하나하나 비교하는것


bool solution(vector<string> phone_book) {
    bool answer = true;
    map<string, int> m;
    
    for(int i = 0; i < phone_book.size(); i ++){
        m[phone_book[i]] ++;
    }
    
    for(int i = 0; i < phone_book.size(); i ++){
        string phone_num = "";
        for(int j = 0; j < phone_book[i].size(); j++)
        {phone_num += phone_book[i][j];
        if(m[phone_num] && phone_num != phone_book[i] )
            return false;}
    }
    return true;
}