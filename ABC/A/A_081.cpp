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

  int ans = 0;
  for(int i=0;i<3;i++){
    if(s[i] == '1') ans++;
  }

  cout << ans << endl;
  return 0;
}
