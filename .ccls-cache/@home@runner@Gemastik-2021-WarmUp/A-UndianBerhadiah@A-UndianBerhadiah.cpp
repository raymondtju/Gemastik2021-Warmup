#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, x;
  cin >> n >> x;
  vector<int> datas;
  vector<int> range;
  vector<int> res;
  int data, temp;
  for (int a = 0; a < n; a++) {
    cin >> data;
    datas.push_back(data);
    temp = abs(x - data);
    range.push_back(temp);
  }
  temp = *min_element(range.begin(), range.end());
  for (int a = 0; a < n; a++) {
    if (range[a] == temp)
      res.push_back(datas[a]);
  }
  sort(res.begin(), res.end());
  for (int ress : res) {
    if (ress < 10)
      cout << "000";
    else if (ress < 100)
      cout << "000";
    else if (ress < 1000)
      cout << "00";
    else if (ress < 10000)
      cout << "0";
    cout << ress << endl;
  }
}