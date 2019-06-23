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
  int N;
  cin >> N;
  bool p = false , w = false , g = false , y = false;
  for(int i=0;i<N;i++){
    char s;
    cin >> s;
    if(s == 'P') p = true;
    if(s == 'W') w = true;
    if(s == 'G') g = true;
    if(s == 'Y') y = true;
  }

  int cnt = 0;
  if(p) cnt++;
  if(w) cnt++;
  if(g) cnt++;
  if(y) cnt++;

  if(cnt == 3) cout << "Three" << endl;
  if(cnt == 4) cout << "Four" << endl;
  return 0;
}
