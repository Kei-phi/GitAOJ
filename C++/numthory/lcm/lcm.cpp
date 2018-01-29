#include <iostream>
using namespace std;
int gcd(int, int);
int lcm(int, int);

int main(){

  int n;
  int *num;
  int answer;
  
  cin >> n;
  num = new int[n];
  
  for(int i = 0; i < n; i++){
    cin >> num[i];
  }

  for(int i = n-1; i > 0; i--){
    num[i-1] = lcm(num[i], num[i-1]);
  }
  answer = num[0];
  
  delete [] num;

  cout << answer << endl;

  return 0;
}

int gcd(int x, int y){
  int r;
  if(x < y){
    int temp;
    temp = x;
    x = y;
    y = temp;
  }
  r = x % y;
  while(r != 0){
    x = y;
    y = r;
    r = x % y;
  }
  return y;
}

int lcm(int x, int y){
  return (x * y)/gcd(x, y);
}
