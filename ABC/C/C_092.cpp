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

#define MOD 1000000007LL

int main(){
  int N;
  cin >> N;
  int a[N+2];
  a[0]= 0 ;
  a[N+1] = 0;
  for(int i=1;i<=N;i++){
    cin >> a[i];
  }

  //全部行く場合の金額sum
  ll sum = 0LL;
  for(int i=0;i<=N;i++){
    sum += abs(a[i+1] - a[i]);
  }

  ll ans;
  for(int i=1;i<=N;i++){
    ans = sum + abs(a[i-1]-a[i+1]) - abs(a[i]-a[i-1]) - abs(a[i+1]-a[i]);
    cout << ans << endl;
  }
  return 0;
}
