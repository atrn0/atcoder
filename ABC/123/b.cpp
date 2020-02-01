#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;


int dceil(int x) {
  return ceil(x / 10.0) * 10;
}

int remtime(int x) {
  return dceil(x)-x;
}

int main() {
  int A, B, C, D, E;

  cin >> A >> B >> C >> D >> E;

  int sum = dceil(A) + dceil(B) + dceil(C) + dceil(D) + dceil(E);
  sum -= max({remtime(A), remtime(B), remtime(C), remtime(D), remtime(E)});

  cout << sum << endl;


  return 0;
}