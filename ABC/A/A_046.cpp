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
  map<int,int> mp;
  for(int i=0;i<3;i++) cin >> a[i];
  for(int i=0;i<3;i++) mp[a[i]]++;

  cout << mp.size() << endl;
  return 0;
}
