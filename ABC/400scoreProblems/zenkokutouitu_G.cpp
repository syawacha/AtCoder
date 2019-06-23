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

  ll cnt[26];
  fill(cnt, cnt + 26, 0LL);
  for(int i = 0; i < N; i++){
    int ind = s[i] - 'a';
    cnt[ind]++;
  }

  ll ans = 0LL;
  ll a = 0LL; //一番大きい回分に使える文字の数
  for(int i = 0; i < 26; i++){
    if(cnt[i] % 2 == 0){
      a += cnt[i];
      cnt[i] = 0;
    }
    else{
      a += cnt[i] - 1;
      cnt[i] = 1;
    }
  }

  ll b = 0; //cntが1の個数
  for(int i = 0; i < 26; i++){
    if(cnt[i] == 1) b++;
  }

  if(b == 0LL){
    ans += a * a;
  }
  else{
    ans += (a + 1) * (a + 1);
    ans += b - 1;
  }

  cout << ans << endl;
  return 0;
}
