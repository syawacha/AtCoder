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
  string s,t;
  cin >> s >> t;
  if(s[2]==t[0] && s[1]==t[1] && s[0]==t[2]) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
