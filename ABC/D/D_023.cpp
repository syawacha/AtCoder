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

int N;
ll H[100000];
ll S[100000];

//ペナルティをt以下にできるか
bool jud(ll t){
  ll p[N];
  for(int i=0;i<N;i++){
    if(t - H[i] < 0) return false;
    p[i] = (t - H[i]) / S[i];
  }
  sort(p,p+N);
  for(int i=0;i<N;i++){
    if(p[i] < i) return false;
  }
  return true;
}

//============================================
int main(){
  cin >> N;
  for(int i=0;i<N;i++) cin >> H[i] >> S[i];

  //一番左のtrueを探す
  ll l = 0LL;
  ll r = 1000000000000000LL;
  while(r - l > 1){
    ll mid = (l + r) / 2;
    if(jud(mid)){
      r = mid;
    } else {
      l = mid;
    }
  }

  cout << r << endl;
  return 0;
}
