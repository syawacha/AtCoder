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
  int N, X;
  cin >> N >> X;
  int L[N];
  for(int i=0;i<N;i++) cin >> L[i];

  int ans = 1;
  int pos = 0;
  for(int i = 0; i < N; i++){
    pos = pos + L[i];
    if(pos <= X) ans++;
  }

  cout << ans << endl;
  return 0;
}
