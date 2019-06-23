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
  int a[2][N];
  for(int i=0;i<2;i++){
    for(int j=0;j<N;j++) cin >> a[i][j];
  }

  //累積和
  int sum0[N+1];
  int sum1[N+1];
  sum0[0]=0;
  sum1[0]=0;
  for(int i=1;i<=N;i++){
    sum0[i] = sum0[i-1] + a[0][i-1];
    sum1[i] = sum1[i-1] + a[1][i-1];
  }

  int ans = 0;
  for(int i=0;i<N;i++){
    int tmp = 0;
    tmp += sum0[i+1];
    tmp += (sum1[N] - sum1[i]);
    ans = max(ans, tmp);
  }

  cout << ans << endl;
  return 0;
}
