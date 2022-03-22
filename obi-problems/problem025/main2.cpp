#include <bits/stdc++.h>
using namespace std;

int main(){
  int L, C, t1, t2;

  cin >> L;
  cin >> C;

  t1 = ((L-1) * (C-1))+(L*C);
  t2 = (((L-1)*2) + ((C-1)*2));

  cout << t1 << endl;
  cout << t2 << endl;

  return 0;
}
