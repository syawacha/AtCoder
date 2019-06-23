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
  int x, a, b;
  cin >> x >> a >> b;
  if(b <= a) cout << "delicious" << endl;
  else if(b - a <= x) cout << "safe" << endl;
  else cout << "dangerous" << endl;

  return 0;
}
