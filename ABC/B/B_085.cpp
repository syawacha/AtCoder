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
  int N;
  cin >> N;
  int d[N];
  for(int i=0;i<N;i++) cin >> d[i];

  sort(d,d+N);

  int ans = 1;
  for(int i=1;i<N;i++){
    if(d[i] != d[i-1]) ans++;
  }

  cout << ans << endl;
  return 0;
}
