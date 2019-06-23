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
  ll N, K;
  cin >> N >> K;
  ll a[N];
  ll sum[N + 1];
  sum[0] = 0LL;
  for(int i=0;i<N;i++){
    cin >> a[i];
    sum[i + 1] = sum[i] + a[i];
  }

  ll ans = 0;
  for(int i = 0; i < N; i++){
    int pos = lower_bound(sum, sum + N + 1, K + sum[i]) - sum;
    //cout << a[i] << " " << pos << endl;
    ans += N - pos + 1;
  }

  cout << ans << endl;
  return 0;
}
