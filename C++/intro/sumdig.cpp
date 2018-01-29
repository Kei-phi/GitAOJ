#include <iostream>
/*
using namespace std;
#define input 1024

long long int sumdig(long long int);

int main(){
  long long int num[input];
  long long int ans[input];
  int i = 0;
  int j = 0;

  do{
    cin >> num[i];
    ans[i] = sumdig(num[i]);
    i++;
  } while(num[i-1] != 0);

  for(int j = 0; j < i-1; j++){
    cout << ans[j] << endl;
  }

  return 0;
}

long long int sumdig(long long int m){
  long long int ans = 0;

  do{
    ans += m % 10;
    m /= 10;
  } while(m != 0);

  return ans;
}
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
  string str;
  int sum;
  while(cin >> str && str != "0"){
    sum = 0;
    for(int i = 0, l = str.size(); i < l; i++){
      sum += str[i] - '0';
    }

    cout << sum << endl;
  }

  return 0;
}
