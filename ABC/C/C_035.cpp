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
  int N,Q;
  cin >> N >> Q;
  int cnt[N] = {}; //cnt[i]i以下を裏返すという作業の回数
  for(int i=0;i<Q;i++){
    int l,r;
    cin >> l >> r;
    l--; r--;
    if(l-1>=0) cnt[l-1]++;
    cnt[r]++;
  }

  //累積和
  ll sum[N+1] = {};
  for(int i=1;i<=N;i++){
    sum[i] = sum[i-1] + cnt[i-1];
  }

  for(int i=0;i<N;i++){
    if((sum[N]-sum[i])%2==0) cout << 0;
    else cout << 1;
  }
  cout << endl;
  return 0;
}
