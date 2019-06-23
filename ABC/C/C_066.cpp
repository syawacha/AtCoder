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

  vector<int> ans;
  for(int i=0;i<N;i++){
    if(i%2==0){
      ans.insert(ans.begin(),a[i]);
    }
    else {
      ans.push_back(a[i]);
    }
  }

  if(N%2==0) reverse(ans.begin(),ans.end());

  for(int i=0;i<N;i++){
    cout << ans[i] << " " ;
  }

  return 0;
}
