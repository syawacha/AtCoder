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
ll MOD = 1000000007;

int main(){
  int N;
  cin >> N;
  char s[2][N];
  for(int i=0;i<N;i++) cin >> s[0][i];
  for(int i=0;i<N;i++) cin >> s[1][i];

  int i = 0;
  ll ans = 1;
  if(s[0][0] == s[1][0]){
    ans *= 3;
    i = 1;
  } else {
    ans *= 6;
    i = 2;
  }

  while(i < N){
    if(s[0][i-1] != s[1][i-1]){
      if(s[0][i] == s[1][i]){
        ans *= 1;
        ans %= MOD;
        i += 1;
      } else {
        ans *= 3;
        ans %= MOD;
        i += 2;
      }
    } else {
      if(s[0][i] == s[1][i]){
        ans *= 2;
        ans %= MOD;
        i += 1;
      } else {
        ans *= 2;
        ans %= MOD;
        i += 2;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
