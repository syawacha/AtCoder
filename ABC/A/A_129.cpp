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

  sort(a, a + 3);

  cout << a[0] + a[1] << endl;
  return 0;
}
