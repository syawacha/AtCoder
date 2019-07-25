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
  int N;
  cin >> N;
  ll a[N];
  for(int i = 0; i < N; i++) cin >> a[i];

  ll ans[N];
  fill(ans, ans + N, 0);
  for(int i = 0; i < N; i++){
    if(i % 2 == 0) ans[0] += a[i];
    else ans[0] -= a[i];
  }

  for(int i = 1; i < N; i++){
    ans[i] = 2 * a[i - 1] - ans[i - 1];
  }

  for(int i = 0; i < N; i++){
    cout << ans[i] << " ";
  }

  cout << endl;
  return 0;
}
