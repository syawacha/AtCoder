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
  for(int i=0;i<N-1;i++){
    if(s[i]!=s[i+1]) cnt++;
  }

  cout << cnt << endl;
  return 0;
}
