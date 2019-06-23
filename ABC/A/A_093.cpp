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
  map<char,int> mp;
  for(int i=0;i<3;i++) mp[s[i]]++;
  if(mp['a']==1 && mp['b']==1 && mp['c']==1) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
