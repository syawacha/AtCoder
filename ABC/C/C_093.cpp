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
  int a[3];
  cin >> a[0] >> a[1] >> a[2];

  int cnt = 0;
  while(a[0]!=a[1] || a[1]!=a[2]){
    sort(a,a+3);

    if(a[1]<a[2]){
      a[0]++;
      a[1]++;
      cnt++;
      continue;
    }
    else if(a[1]==a[2] && a[0]<a[1]){
      a[0] += 2;
      cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}
