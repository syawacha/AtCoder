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
  string s;
  cin >> s;
  int N = s.size();

  int p = N - 1;
  while(p!=-1){
    if(p <= 3){
      cout << "NO" << endl;
      return 0;
    }

    string t = "hogeh";
    t[0] = s[p-4];
    t[1] = s[p-3];
    t[2] = s[p-2];
    t[3] = s[p-1];
    t[4] = s[p];
    //cout << t << endl;

    if(t == "dream"){
      p = p-5;
    }
    else if(t == "eamer"){
      if(p < 6){
        cout << "NO" << endl;
        return 0;
      }
      if(s[p-5] == 'r' && s[p-6] == 'd'){
        p = p-7;
      } else {
        cout << "NO" << endl;
        return 0;
      }
    }
    else if(t == "erase"){
      p = p-5;
    }
    else if(t == "raser"){
      if(p < 5){
        cout << "NO" << endl;
      }
      if(s[p-5] == 'e'){
        p = p-6;
      } else {
        cout << "NO" << endl;
        return 0;
      }
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  return 0;
}
