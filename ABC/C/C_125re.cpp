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

ll gcd(ll a, ll b){
  if(b == 0LL) return a;
  return gcd(b, a % b);
}

//============================
int main(){
  int N;
  cin >> N;
  ll a[N];
  for(int i=0;i<N;i++) cin >> a[i];

  ll gcl[N];
  ll gcr[N];
  gcl[0] = a[0];
  for(int i=1;i<N;i++) gcl[i] = gcd(gcl[i-1], a[i]);
  gcr[N-1] = a[N-1];
  for(int i=N-2;i>=0;i--) gcr[i] = gcd(gcr[i+1], a[i]);

  ll ans = max(gcl[N-2], gcr[1]);
  for(int i=1;i<N-1;i++){
    ans = max(ans, gcd(gcl[i-1], gcr[i+1]));
  }

  cout << ans << endl;
  return 0;

}
