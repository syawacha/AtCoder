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

  char add = '+';
  char mul = '*';
  char sub = '-';
  char div = '/';

  stack<char> st;
  for(int i=0;i<N;i++){
    if(s[i] == add || s[i] == mul || s[i] == sub || s[i] == div){
      st.push(s[i]);
    }
    else if(s[i] == ')'){
      st.pop();
      cout << s[i];
    }
    else if(s[i] == ','){
      cout << st.top();
    }
    else{
      cout << s[i];
    }
  }

  cout << endl;
  return 0;
}
