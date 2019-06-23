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
  int a,b;
  cin >> a >> b;
  if(a == b){
    cout << 2 * a << endl;
  } else {
    int mx = max(a,b);
    cout << 2 * mx - 1 << endl;
  }
  return 0;
}
