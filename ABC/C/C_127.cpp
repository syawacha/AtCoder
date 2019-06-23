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
  int N, M;
  cin >> N >> M;
  int L[M], R[M];
  for(int i=0;i<M;i++) cin >> L[i] >> R[i];

  int l, r;
  l = L[0];
  r = R[0];
  for(int i = 1; i < M; i++){
    l = max(l, L[i]);
    r = min(r, R[i]);
  }

  cout << max(0, r - l + 1) << endl;
  return 0;
}
