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
  if(s[0]==s[1] && s[1]==s[2]) cout << "Yes" << endl;
  else if(s[1]==s[2] && s[2]==s[3]) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
