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
  char x,y;
  cin >> x >> y;
  if(x<y) cout << "<" << endl;
  if(x>y) cout << ">" << endl;
  if(x==y) cout << "=" << endl;
  return 0;
}
