// need to be faster
#include <iostream>
using namespace std;
#define M 1000000007
int mod_power(int); // 何乗するとMを超えるか，を判定してそのテンポで行く

int main(){
  long long int m, n;
  long long int answer = 1;//初期化を忘れるとヤバい数になる

  cin >> m;
  cin>> n;

  for(long long int i = 0; i < n; i++){
    answer = (answer * m) % M;
  }

  cout << answer << endl;
  return 0;
}
