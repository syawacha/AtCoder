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
  int cnt[4];
  fill(cnt, cnt + 4, 0);
  for(int i=0;i<N;i++){
    int a;
    cin >> a;
    cnt[a - 1]++;
  }

  int ans = 0;
  ans += cnt[3];
  ans += cnt[2];
  cnt[0] -= cnt[2];
  cnt[0] = max(0, cnt[0]);

  if(cnt[1] % 2 == 0){
    ans += cnt[1] / 2;
  } else {
    ans += cnt[1] / 2 + 1;
    cnt[0] -= 2;
  }

  cnt[0] = max(cnt[0], 0);
  ans += (cnt[0] + 3) / 4;

  cout << ans << endl;
  return 0;
}
