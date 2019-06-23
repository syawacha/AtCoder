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
  ll N,K,X,Y;
  cin >> N >> K >> X >> Y;

  if(K >= N) cout << N * X << endl;
  else cout << K * X + (N - K) * Y << endl;
  return 0;
}
