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
  string s[N];
  for(int i=0;i<N;i++) cin >> s[i];
  int M;
  cin >> M;
  string t[M];
  for(int i=0;i<M;i++) cin >> t[i];

  int ans = 0;
  for(int i=0;i<N;i++){
    int res = 0;
    string tes = s[i];
    for(int j=0;j<N;j++){
      if(tes == s[j]) res++;
    }
    for(int j=0;j<M;j++){
      if(tes == t[j]) res--;
    }
    ans = max(ans,res);
  }

  cout << ans << endl;
  return 0;
}
