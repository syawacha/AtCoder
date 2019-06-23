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
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  cout << min(a,b) + min(c,d) << endl;
  return 0;
}
