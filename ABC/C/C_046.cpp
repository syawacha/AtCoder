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
  ll T[N],A[N];
  for(int i=0;i<N;i++) cin >> T[i] >> A[i];

  ll t,a;
  t = T[0];
  a = A[0];
  for(int i=1;i<N;i++){
    //cout << "t = " << t << "  a = " << a << endl;
    ll ttmp , atmp;
    if(t % T[i] == 0){
      ttmp = t;
      atmp = t / T[i] * A[i];
    } else {
      ttmp = T[i] * (t / T[i] + 1);
      atmp = A[i] * (t / T[i] + 1);
    }

    if(atmp >= a){
      t = ttmp;
      a = atmp;
      continue;
    }

    if(a % A[i] == 0){
      t = a / A[i] * T[i];
    } else {
      a = A[i] * (a / A[i] + 1);
      t = a / A[i] * T[i];
    }
  }

  cout << t + a << endl;
  return 0;
}
