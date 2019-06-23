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
  int N,H;
  cin >> N >> H;
  int a[N],b[N];
  for(int i=0;i<N;i++) cin >> a[i] >> b[i];
  sort(a,a+N);
  sort(b,b+N);
  reverse(b,b+N);

  int amax = a[N-1];
  int dmg = 0;
  int cnt = 0;
  for(int i=0;i<N;i++){
    if(dmg<H && b[i]>amax){
      dmg += b[i];
      cnt++;
    }
    else break;
  }

  if(dmg >= H){
    cout << cnt << endl;
    return 0;
  }

  int res = H - dmg;
  cnt += (res + amax - 1) / amax;

  cout << cnt << endl;
  return 0;
}
