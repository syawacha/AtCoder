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

ll mod = 1000000007;

int main(){
  ll a,b,c;
  cin >> a >> b >> c;
  ll x = a * b;
  x %= mod;
  x *= c;
  x %= mod;

  cout << x << endl;
  return 0;
}
