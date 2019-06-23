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
  int a[5];
  int k;
  for(int i=0;i<5;i++) cin >> a[i];
  cin >> k;

  int mx = *max_element(a,a+5);
  int mn = *min_element(a,a+5);

  if(mx - mn > k) cout << ":(" << endl;
  else cout << "Yay!" << endl;
  return 0;
}
