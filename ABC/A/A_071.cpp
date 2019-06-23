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
  int x,a,b;
  cin >> x >> a >> b;
  if(abs(x-a) > abs(x-b)) cout << "B" << endl;
  else cout << "A" << endl;
  return 0;
}
