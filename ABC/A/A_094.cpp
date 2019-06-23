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
  int a,b,x;
  cin >> a >> b >> x;
  if(a<=x && x<=a+b) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
