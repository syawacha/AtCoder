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
  ll r, D, x[11];
  cin >> r >> D >> x[0];

  for(int i=1;i<=10;i++){
    x[i] = r * x[i - 1] - D;
  }

  for(int i=1;i<=10;i++){
    cout << x[i] << endl;
  }

  return 0;

}
