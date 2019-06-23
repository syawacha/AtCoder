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
  int w[N];
  for(int i=0;i<N;i++) cin >> w[i];

  int sum[N + 1];
  sum[0] = 0;
  for(int i = 1; i <= N; i++){
    sum[i] = sum[i - 1] + w[i - 1];
  }

  int ans = 1000000000;
  for(int i = 0; i <= N; i++){
    ans = min(ans, abs(sum[i] -  (sum[N] - sum[i])));
  }

  cout << ans << endl;
  return 0;
}
