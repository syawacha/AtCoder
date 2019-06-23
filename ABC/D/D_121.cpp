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
  ll A,B;
  cin >> A >> B;

  ll sum = 0LL;
  for(int i=0;i<42;i++){
    if(i == 0){
      int tmp = (B+1-A)/2;
      if(tmp%2==1) sum += 1;
      continue;
    }

    //cout << "now" << i << endl;

    ll divider = (1LL << (i+1));
    ll a = A % divider;
    ll b = B % divider;

    //cout << " divider=" << divider << endl;

    bool isEvenA;
    bool isEvenB;

    if(a<divider/2) isEvenA = true;
    else if((divider-a)%2==1) isEvenA = false;
    else if((divider-a)%2==0) isEvenA = true;

    if(b<divider/2) isEvenB = true;
    else if((divider-b)%2==1) isEvenB = true;
    else if((divider-b)%2==0) isEvenB = false;

    if(isEvenA && !isEvenB){
      sum += divider/2;
      //cout << " sum=" << sum << endl;
    }
    if(!isEvenA && isEvenB){
      sum += divider/2;
      //cout << " sum=" << sum << endl;
    }
  }


  cout << sum << endl;
  return 0;
}
