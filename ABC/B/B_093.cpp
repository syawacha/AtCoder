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
  int a,b,K;
  cin >> a >> b >> K;
  int s = a + K - 1;
  int t = b - K + 1;

  if(t <= s){
    for(int i=a;i<=b;i++) cout << i << endl;
  } else {
    for(int i=a;i<=s;i++) cout << i << endl;
    for(int i=t;i<=b;i++) cout << i << endl;
  }

  return 0;
}
