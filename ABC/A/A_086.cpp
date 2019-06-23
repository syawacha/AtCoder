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
  int a,b;
  cin >> a >> b;
  int c = a*b;
  if(c%2==0) cout << "Even" << endl;
  else cout << "Odd" << endl;
  return 0;
}
