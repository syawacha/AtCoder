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
typedef unsigned int uint;
using namespace std;

int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;

  int sum[N+1]; //i人目までで、西を向いている人の数
  sum[0] = 0;
  for(int i=0;i<N;i++){
    if(S[i] == 'W') sum[i+1] = sum[i] + 1;
    else sum[i+1] = sum[i];
  }

  //for(int i=0;i<N;i++) cout << sum[i] << endl;

  int ans = 10000000;
  for(int i=0;i<N;i++){
    int res;
    //左側
    int left = sum[i];
    //右側
    int right = (N-1) - i - (sum[N]-sum[i+1]);

    res = left + right;
    ans = min(ans, res);
  }

  cout << ans << endl;
  return 0;
}
