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
  int N,K;
  cin >> N >> K;

  int ans = K;
  for(int i=0;i<N-1;i++){
    ans *= K - 1;
  }

  cout << ans << endl;
  return 0;
}
