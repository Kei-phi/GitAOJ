/*
#include <iostream>
using namespace std;

struct prime prime_generator(int);
int div_prime(int, int);

int *num;

struct prime{
  int counter;
  int *p;
};

int main(){

  int n;

  cin >> n;

  struct prime ans = prime_generator(n);

  for(int k = 0; k <= ans.counter; k++){
    cout << ans.p[k] << " ";
  }
  cout << endl;

  delete [] num;

  return 0;
}

struct prime prime_generator(int n){

  num  = new int[n];
  num[0] = 0;
  int j = 0;
      
  for(int i = 2; i <= n; i++){
    
    if(n == 1){

      break;
      
    } else{
      
      if(div_prime(i, j)){
	
	num[j] = i;
	j++;
	
      } else{
	
      }
    }
  }

  return (struct prime){j, num};
}

int div_prime(int i, int j){
  for(int k = 0; k <= j; j++){
    if(i % num[k] == 0){
      return 0;
    } else {
      
    }
  }
  return 1;
}
*/
/*
class Prime {
public:
  int prime;
  int counter;
  Prime ();
};

Prime::Prime() {
  int prime = 0;
  int counter = 0;
}

class Prime prime_generator (int n) {
  class Prime data;
  
  if (n =< 1){
    return data;
  } else if (n == 2) {
    return data.;
  }
  }
*/

// 配列は返せない
// class か struct を使うしかない
// でもその数が素数かどうかのみ判定して，素数だったら配列の次に入れる，みたいなプログラムでもいいのでは?
// 配列は prime data とかいってグローバルに宣言してですよね
// りょー それで組むわ
#include <iostream>
using namespace std;
#define Max 1024

int judge_prime (int);
bool div_prime (int);

int prime_data[Max];

int main () {
  int num;
  cin >> num;
  int counter = 0;
  for (int i = 0; i < num; i++) {
    if (judge_prime(i) != 0){
      prime_data[counter] = i;
      counter++;
    }
  }
  int j = 0;
  while (prime_data[j] != 0){
    cout << prime_data[j] << " ";
    j++;
  }

  cout << endl;
  return 0;
}
int judge_prime(int n) {
  int temp = -1;

  if (n <= 1) {
    return 0;
  } else if (n == 2) {
    return 2;
  } else if (n % 2 == 0) {
    return 0;
  } else {
    if (div_prime(n)){
      return n;
    } else {
      return 0;
    }
  }
}

bool div_prime (int n) {
  int j = 0;
  while(prime_data[j] != 0) {
    if (n % prime_data[j] == 0){
      return false;
    } else {
      j++;
    }
  }
  return true;
}
