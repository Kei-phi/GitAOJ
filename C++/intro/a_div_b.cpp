#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int a, b;
  int r;

  cin >> a;
  cin >> b;

  cout << a / b << " " << a % b << " " << fixed
       << setprecision(5) << (double)a / (double)b << endl;

  return 0;
}
