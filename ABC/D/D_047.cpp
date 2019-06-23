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
  int N,T;
  cin >> N >> T;
  int a[N];
  for(int i=0;i<N;i++) cin >> a[i];

  vector<int> ans;

  int mn = a[0];
  int mx;
  if(a[0] < a[1]){
    mx = a[1];
    ans.push_back(mx - mn);
  } else {
    mn = a[1];
    mx = a[1];
  }

  for(int i=2;i<N;i++){
    if(a[i] < mn){
      mn = a[i];
      mx = a[i];
    }
    if(mx < a[i]){
      mx = a[i];
      ans.push_back(mx - mn);
    }
  }

  /*for(int i=0;i<ans.size();i++){
    cout << ans[i] << endl;
  }*/

  int ans_mx = *max_element(ans.begin(),ans.end());
  int cnt = 0;
  for(int i=0;i<ans.size();i++){
    if(ans[i] == ans_mx) cnt++;
  }

  cout << cnt << endl;
  return 0;
}
