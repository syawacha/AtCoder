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
  ll X,Y;
  cin >> X >> Y;

  int cnt = 1;
  while(1){
    if(X*2<=Y){
      X *= 2;
      cnt++;
    }else{
      break;
    }
  }

  cout << cnt << endl;
  return 0;
}
