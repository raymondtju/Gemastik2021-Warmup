#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// g++ main.cpp -o main && ./main
int main() {
  int n; cin >> n;
  int value[n];
  int count = 0;
  for (int a = 0; a < n; a++)
    cin >> value[a];
  for (int a = 1; a < n; a++) {
    if (value[a] > value[a - 1])
      count = count + (value[a] - value[a-1]);
  }
  cout << count << endl;
}