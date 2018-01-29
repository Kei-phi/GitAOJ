#include <iostream>
using namespace std;

int main(){

  int x[3000], y[3000];
  int n = 0;
  
  do {
    cin >> x[n];
    cin >> y[n];
    n++;
  } while(x[n-1] != 0 || y[n-1] != 0);

  for(int i = 0; i < n-1; i++){
    if(x[i] <= y[i]){
      cout << x[i] << " " << y[i] << endl;
    } else {
      cout << y[i] << " " << x[i] << endl;
    }
  }
  
  return 0;
}
