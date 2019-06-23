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

  int cnt = 0;
  for(int i=0;i<N;i++){
    if(s[i] == 'o') cnt++;
  }

  if(cnt + 15 - N >= 8) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
