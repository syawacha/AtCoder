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
  int N;
  cin >> N;
  int red = 0;
  map<int,int> mp;
  for(int i=0;i<N;i++){
    int a;
    cin >> a;
    if(1<=a && a<=399) mp[0]++;
    else if(400<=a && a<=799) mp[1]++;
    else if(800<=a && a<=1199) mp[2]++;
    else if(1200<=a && a<=1599) mp[3]++;
    else if(1600<=a && a<=1999) mp[4]++;
    else if(2000<=a && a<=2399) mp[5]++;
    else if(2400<=a && a<=2799) mp[6]++;
    else if(2800<=a && a<=3199) mp[7]++;
    else if(3200<=a) red++;
  }

  int mn,mx;
  if((int)mp.size() == 0) mn = 1;
  else mn = (int)mp.size();
  mx = (int)mp.size() + red;

  cout << mn << " " << mx << endl;
  return 0;
}
