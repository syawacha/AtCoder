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
  int w, h, x, y;
  cin >> w >> h >> x >> y;

  cout << (double)w * (double)h / 2.0 << " ";

  if(w == 2 * x && h == 2 * y) cout << 1 << endl;
  else cout << 0 << endl;
  return 0; 
}
