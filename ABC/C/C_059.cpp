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
  int a[N];
  for(int i=0;i<N;i++) cin >> a[i];
  ll sum1[N],sum2[N];
  sum1[0] = a[0];
  sum2[0] = a[0];
  for(int i=1;i<N;i++){
    sum1[i] = sum1[i-1] + a[i];
    sum2[i] = sum2[i-1] + a[i];
  }

  /*for(int i=0;i<N;i++) cout << sum1[i] << " ";
  cout << endl;*/

  //+-+-+-...
  ll ans1 = 0LL;
  ll ope = 0LL;
  for(int i=0;i<N;i++){
    sum1[i] += ope;
    if(i%2==0 && sum1[i]<=0){
      ope += 1 - sum1[i];
      ans1 += 1 - sum1[i];
    }
    else if(i%2==1 && sum1[i]>=0){
      ope += -1 - sum1[i];
      ans1 += sum1[i] + 1;
    }
  }

  //-+-+-+...
  ll ans2 = 0LL;
  ope = 0;
  for(int i=0;i<N;i++){
    sum2[i] += ope;
    if(i%2==1 && sum2[i]<=0){
      ope += 1 - sum2[i];
      ans2 += 1 - sum2[i];
    }
    else if(i%2==0 && sum2[i]>=0){
      ope += -1 - sum2[i];
      ans2 += sum2[i] + 1;
    }
  }

  /*for(int i=0;i<N;i++) cout << sum1[i] << " ";
  cout << endl;
  for(int i=0;i<N;i++) cout << sum2[i] << " ";
  cout << endl;

  cout << ans1 << ans2 << endl;*/
  cout << min(ans1, ans2) << endl;
  return 0;
}
