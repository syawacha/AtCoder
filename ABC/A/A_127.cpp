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
  int a, B;
  cin >> a >> B;

  if(a >= 13) cout << B << endl;
  else if(6 <= a && a <= 12) cout << B / 2 << endl;
  else if(a <= 5) cout << 0 << endl;
  return 0;
}
