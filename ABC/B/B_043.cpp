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
  string s;
  cin >> s;
  int N = s.size();

  stack<int> st;
  for(int i=0;i<N;i++){
    if(s[i] == '0') st.push(0);
    if(s[i] == '1') st.push(1);
    if(s[i] == 'B' && !st.empty()) st.pop();
  }

  vector<int> ans;
  int n = st.size();
  for(int i=0;i<n;i++){
    ans.push_back(st.top());
    st.pop();
  }

  reverse(ans.begin() , ans.end());
  for(int i=0;i<ans.size();i++){
    cout << ans[i];
  }

  cout << endl;
  return 0;
}
