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
  int N,K;
  cin >> N >> K;
  string s;
  cin >> s;

  if(s[K - 1] == 'A') s[K - 1] = 'a';
  if(s[K - 1] == 'B') s[K - 1] = 'b';
  if(s[K - 1] == 'C') s[K - 1] = 'c';

  cout << s << endl;
  return 0;
}
