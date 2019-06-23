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
  int a,b,c;
  cin >> a >> b >> c;
  if(a==b) cout << c << endl;
  if(a==c) cout << b << endl;
  if(b==c) cout << a << endl;
  return 0;
}
