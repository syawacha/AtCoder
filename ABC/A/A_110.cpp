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
  int n[3];
  cin >> n[0] >> n[1] >> n[2];
  sort(n,n+3);
  int mx;
  mx=n[2]*10 + n[1] + n[0];
  cout << mx << endl;
  return 0;
}
