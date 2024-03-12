#include <bits/stdc++.h>
using namespace std;

//완주하지 못한 선수는 1명 이름을 return
// 1- 100,000
//동명이인이 있을 수 있음, 소문자 구성

/* 
participant에 있는 이름이 completion 에 있으면 넘기고 아닐경우 해당이름 return (동명이인 처리 따로 해줘야함) + 이중 for문 구조로 시간복잡도가 높아짐
or hash 를 이용해 <이름, count> 구성으로 participant 에서 count ++, completion 에서 
count --; 해서 count 가 0 이 아닌 
*/

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string,int> m;
    
    for(auto player: participant){
        if(m.end() == m.find(player)) m.insert(make_pair(player,1));    
        else m[player] ++;
    }
    
    for(auto player:completion) m[player]--;
    
    for(auto remain:participant){
        if(m[remain] > 0){
            answer = remain;
            break;
        }
    }
    return answer;
}