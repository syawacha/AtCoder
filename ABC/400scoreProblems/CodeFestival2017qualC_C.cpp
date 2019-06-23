#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <stack>
#include <set>
#include <map>
typedef long long ll;
using namespace std;

int main(){
  string s;
  cin >> s;
  int N = s.size();

  vector<char> t;
  for(int i=0;i<N;i++){
    if(s[i] != 'x') t.push_back(s[i]);
  }
  int M = t.size();

  //作れるかチェック
  bool able = true;
  if(M % 2 == 1){
    int p = M / 2;
    for(int i = 1; i <= p; i++){
      if(t[p + i] != t[p - i]){
        able = false;
        break;
      }
    }
  }
  else{
    int p = M / 2;
    for(int i = 1; i <= p; i++){
      if(t[p - i] != t[p + i - 1]){
        able = false;
        break;
      }
    }
  }
  // チェック終わり

  if(able == false){
    cout << -1 << endl;
    return 0;
  }

  int cnt = 0;
  int l = 0;
  int r = N - 1;
  while(l < r){
    if(s[l] == 'x' && s[r] == 'x'){
      l++;
      r--;
    }
    else if(s[l] == 'x' && s[r] != 'x'){
      l++;
      cnt++;
    }
    else if(s[l] != 'x' && s[r] == 'x'){
      r--;
      cnt++;
    }
    else{
      l++;
      r--;
    }
  }

  cout << cnt << endl;
  return 0;
}
