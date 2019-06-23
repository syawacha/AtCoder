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
  ll N,M;
  cin >> N >> M;

  if(N==1 && M==1) cout << 1 << endl;
  else if(N==1 || M==1) cout << max(N,M)-2 << endl;
  else cout << (N-2)*(M-2) << endl;

  return 0;
}
