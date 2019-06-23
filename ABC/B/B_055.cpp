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
ll MOD = 1000000007LL;
int main(){
  int N;
  cin >> N;
  ll fact[N+1];
  fact[0] = 1LL;
  for(int i=1;i<=N;i++){
    fact[i] = fact[i-1] * i % MOD;
  }

  cout << fact[N] << endl;
  return 0;
}
