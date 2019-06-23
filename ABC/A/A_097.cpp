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
  if(abs(a-c)<=d || (abs(a-b)<=d && abs(b-c)<=d) ) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
