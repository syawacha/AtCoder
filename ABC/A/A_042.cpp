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
  cin >> a[0] >> a[1] >> a[2];
  int cnt5=0;
  int cnt7=0;
  for(int i=0;i<3;i++){
    if(a[i]==5) cnt5++;
    if(a[i]==7) cnt7++;
  }

  if(cnt5==2 && cnt7==1){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
