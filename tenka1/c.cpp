#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <string>

typedef long long int ll;
typedef unsigned long long int ull;

using namespace std;

int main()
{
  ll N, w = 0, m = 0;
  string S;

  cin >> N >> S;

  for (int i = 0; i < N; i++)
  {
    if (S[i] == '.')
      w++;
  }
  m = w;
  for (int i; i < N; i++)
  {
    if (S[i] == '.')
    {
      w--;
    }
    else
    {
      w++;
    }
    if (m > w)
    {
      m = w;
    }
  }

  cout << m << endl;

  return 0;
}

// ...###..