#include <bits/stdc++.h>
using namespace std;

int A, B;
string a, b;

int main(){
    cin >> A;
    while(A--){
        map<string, int> _map;
        cin >> B;
         for(int i = 0; i < B; i++){
            cin >> a >> b;
            _map[b]++;
        }
        long long ret = 1;
        for(auto c : _map){
            ret *= ((long long)c.second + 1);
        }
        ret--;
        cout << ret << "\n";
    }
    return 0;
}
