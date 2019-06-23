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
  int a[N];
  int s[N];//各点にとって最適な位置
  for(int i=0;i<N;i++){
    cin >> a[i];
    s[i] = a[i] - i - 1;
  }

  sort(s,s+N);
  int b = s[N/2];

  ll ans = 0;
  for(int i=0;i<N;i++){
    ans += abs(a[i]-b-i-1);
  }

  cout << ans << endl;
  return 0;
}
