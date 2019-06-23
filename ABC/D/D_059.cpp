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
  ll x,y;
  cin >> x >> y;

  if(abs(x-y)<=1){
    cout << "Brown" << endl;
  } else {
    cout << "Alice" << endl;
  }

  return 0;
}
