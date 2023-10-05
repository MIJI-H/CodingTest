#include<bits/stdc++.h>
using namespace std;

int A,B,arr[15003],cnt;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> A >> B;
    for (int i = 0; i < A; i ++) cin >> arr[i];
    for (int i = 0; i < A; i ++){
        for(int j = i + 1; j < A; j ++){
            if(arr[i] + arr [j] == B)cnt ++;
        }
    }
  cout << cnt << "\n";
  return 0;            
}

