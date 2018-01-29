#include <iostream>
using namespace std;

int main(){
  int *num;
  int n;

  cin >> n;

  num = new int[n];

  for(int i = 0; i < n; i++){
    cin >> num[i];
  }

  for(int i = n-1; i >= 1; i--){
    cout << num[i] << " ";
  }

  cout << num[0] << endl;

  return 0;
}
