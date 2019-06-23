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
  int l[N];
  for(int i=0;i<N;i++) cin >> l[i];

  sort(l,l+N);
  reverse(l,l+N);

  int ans = 0;
  for(int i=0;i<K;i++){
    ans += l[i];
  }

  cout << ans << endl;
  return 0;
}
