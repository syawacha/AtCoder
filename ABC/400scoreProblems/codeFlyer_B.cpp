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
  int N, Q;
  cin >> N >> Q;
  ll x[N];
  for(int i=0;i<N;i++) cin >> x[i];
  ll sum[N + 1];
  sum[0] = 0LL;
  for(int i=1;i<=N;i++) sum[i] = sum[i-1] + x[i-1];

  ll c[Q], d[Q];
  for(int i=;i<Q;i++) cin >> c[i] >> d[i];

  for(int i=0;i<Q;i++){

  }
}
