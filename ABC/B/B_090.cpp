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
  int A,B;
  cin >> A >> B;

  int cnt = 0;
  for(int i=A;i<=B;i++){
    if(i/10000 == i%10){
      if((i/1000)%10 == (i%100)/10) cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}
