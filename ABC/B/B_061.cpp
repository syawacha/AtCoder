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
  int N,M;
  cin >> N >> M;

  int cnt[N+1] = {};
  for(int i=0;i<M;i++){
    int a,b;
    cin >> a >> b;
    cnt[a]++;
    cnt[b]++;
  }

  for(int i=1;i<=N;i++){
    cout << cnt[i] << endl;
  }

  return 0;
}
