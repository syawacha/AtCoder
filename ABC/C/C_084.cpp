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
  int c[N-1],s[N-1],f[N-1];
  for(int i=0;i<N-1;i++){
    cin >> c[i] >> s[i] >> f[i];
  }

  for(int i=0;i<N;i++){
    int t = 0;
    for(int j=i;j<N-1;j++){
      if(t<s[j]){
        t = s[j];
        t += c[j];
      }else{
        int tmp = (t-s[j]+f[j]-1)/f[j];
        t = s[j] + tmp * f[j];
        t += c[j];
      }
    }
    cout << t << endl;
  }

  return 0;
}
