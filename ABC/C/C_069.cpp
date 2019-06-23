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
  int cnt1 = 0;
  int cnt2 = 0;
  int cnt4 = 0;
  for(int i=0;i<N;i++){
    int tmp;
    cin >> tmp;
    if(tmp%4==0) cnt4++;
    else if(tmp%2==0) cnt2++;
    else cnt1++;
  }


  if(cnt4 >= cnt1) cout << "Yes" << endl;
  else{
    if(cnt4 == cnt1 - 1 && cnt2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}
