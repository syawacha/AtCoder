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
  int A[N];
  for(int i=0;i<N;i++) cin >> A[i];
  sort(A,A+N);
  reverse(A,A+N);

  vector<ll> ans;
  int cnt = 1;
  for(int i=1;i<N;i++){
    if(A[i]==A[i-1]) cnt++;
    else cnt = 1;

    if(cnt >= 2){
      ans.push_back(A[i]);
      cnt = 0;
    }

    if(ans.size() == 2) break;
  }

  if(ans.size()!=2){
    cout << 0 << endl;
  } else {
    cout << ans[0] * ans[1] << endl;
  }
  return 0;
}
