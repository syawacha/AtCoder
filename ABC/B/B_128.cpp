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

/*int main(){
    int N;
    cin >> N;
    string s[N];
    int p[N],ind[N];
    for(int i=0;i<N;i++){
      cin >> s[i] >> p[i];
      ind[i] = i + 1;
    }

    for(int i=0;i<N;i++){
      for(int j=0;j<N-1;j++){
        if(s[j] == s[j+1]){
          if(p[j] < p[j + 1]){
            string tmp;
            int t;
            tmp = s[j];
            s[j] = s[j+1];
            s[j+1] = tmp;
            t = p[j];
            p[j] = p[j + 1];
            p[j + 1] = t;
            t = ind[j];
            ind[j] = ind[j + 1];
            ind[j+1] = t;
          }
        }
        else if(s[j] > s[j+1]){
          string tmp;
          int t;
          tmp = s[j];
          s[j] = s[j+1];
          s[j+1] = tmp;
          t = p[j];
          p[j] = p[j + 1];
          p[j + 1] = t;
          t = ind[j];
          ind[j] = ind[j + 1];
          ind[j+1] = t;
        }
      }
    }

    for(int i=0;i<N;i++){
      cout << ind[i] << endl;
    }
    return 0;
}*/

struct shop{
  string s;
  int p;
  int ind;

  bool operator<(const shop& right) const {
    bool x;
    if(s == right.s) x = (p > right.p);
    else x = (s < right.s);
    return x;
  }
};

int main(){
  int N;
  cin >> N;
  shop S[N];
  for(int i=0;i<N;i++){
    string s;
    int p;
    cin >> s >> p;
    S[i] = shop{s, p, i + 1};
  }
  sort(S, S + N);
  for(int i=0;i<N;i++){
    cout << S[i].ind << endl;
  }
  return 0;
}
