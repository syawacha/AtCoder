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
  int a[N+1];
  for(int i=1;i<=N;i++) cin >> a[i];

  int now = 1;
  int cnt = 0;
  while(true){
    if(cnt >= N+100){
      cout << -1 << endl;
      return 0;
    }
    now = a[now];
    cnt++;
    if(now == 2) break;
  }

  cout << cnt << endl;
  return 0;
}
