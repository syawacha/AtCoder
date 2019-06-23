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
  string S;
  cin >> S;
  int ans = 0;
  for(int i=0;i<4;i++){
    if(S[i]=='+') ans++;
    else ans--;
  }
  cout << ans << endl;
  return 0;
}
