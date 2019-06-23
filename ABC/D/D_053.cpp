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
  int cnt[100001] = {};
  for(int i=0;i<N;i++){
    int a;
    cin >> a;
    cnt[a]++;
  }

  int ans = 0; //出現する数の個数
  int s = 0;//2個以上偶数個出現する数の個数
  for(int i=0;i<=100000;i++){
    if(cnt[i]>=2 && cnt[i]%2==0) s++;
    if(cnt[i]>0) ans++;
  }

  if(s%2==0) cout << ans << endl;
  else cout << ans - 1 << endl;

  return 0;  
}
