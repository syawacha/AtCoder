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
  int a[3];
  for(int i=0;i<3;i++) cin >> a[i];
  sort(a, a+3);

  if(a[2] == a[0] + a[1]) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
