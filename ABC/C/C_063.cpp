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
  int s[N];
  for(int i=0;i<N;i++) cin >> s[i];

  sort(s,s+N);

  int sum = 0;
  for(int i=0;i<N;i++){
    sum += s[i];
  }

  //全部10の倍数
  bool isok = true;
  for(int i=0;i<N;i++){
    if(s[i]%10 != 0){
      isok = false;
      break;
    }
  }
  if(isok){
    cout << 0 << endl;
    return 0;
  }


  if(sum%10 != 0){
    cout << sum << endl;
    return 0;
  }

  for(int i=0;i<N;i++){
    if((sum-s[i])%10 != 0){
      sum -= s[i];
      break;
    }
  }

  cout << sum << endl;
  return 0;

}
