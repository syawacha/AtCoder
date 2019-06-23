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
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if(a+b > c+d) cout << "Left" << endl;
  else if(a+b == c+d) cout << "Balanced" << endl;
  else cout << "Right" << endl;

  return 0;
}
