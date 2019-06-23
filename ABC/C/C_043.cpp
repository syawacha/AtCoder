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
  int N;
  cin >> N;
  int a[N];
  for(int i=0;i<N;i++) cin >> a[i];

  int ans = 1000000000;
  for(int i=-100;i<=100;i++){
    int sum = 0;
    for(int j=0;j<N;j++){
      sum += (i - a[j]) * (i - a[j]);
    }
    ans = min(ans,sum);
  }

  cout << ans << endl;
  return 0;
}
