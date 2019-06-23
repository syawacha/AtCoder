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
  string s;
  cin >> s;
  vector<char> ans;
  for(int i=0;i<s.size();i++){
    if(i%2==0) ans.push_back(s[i]);
  }

  for(int i=0;i<ans.size();i++){
    cout << ans[i];
  }
  cout << endl;
  return 0;
}
