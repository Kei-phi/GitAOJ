#include <iostream>
using namespace std;

int main(){
  int *num;
  int n;
  int max = 0, min = 0;
  long long int sum = 0;

  cin >> n;
  num = new int[n];
  
  for(int i = 0; i < n; i++){
    cin >> num[i];
    sum += num[i];
  }
  min = num[0];
  max = num[0];
  
  for(int i = 1; i < n; i++){
    if(num[i] < min){
      min = num[i];
    } else if(num[i] > max) {
      max = num[i];
    }
  }

  cout << min << " " << max << " " << sum << endl;

  delete [] num;
  
  return 0;
}
