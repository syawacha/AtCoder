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
  if(s == "WBWBWWBWBWBWWBWBWWBW") cout << "Do";
  if(s == "WBWWBWBWBWWBWBWWBWBW") cout << "Re";
  if(s == "WWBWBWBWWBWBWWBWBWBW") cout << "Mi";
  if(s == "WBWBWBWWBWBWWBWBWBWW") cout << "Fa";
  if(s == "WBWBWWBWBWWBWBWBWWBW") cout << "So";
  if(s == "WBWWBWBWWBWBWBWWBWBW") cout << "La";
  if(s == "WWBWBWWBWBWBWWBWBWWB") cout << "Si";
  return 0;
}
