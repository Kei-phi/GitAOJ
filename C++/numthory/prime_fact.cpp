#include <iostream>
using namespace std;

#define Max 1024

long long int judge_prime (long long int);
bool div_prime (long long int);

long long int prime_data[Max];

long long int judge_prime(long long int n) {
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

bool div_prime (long long int n) {
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

void prime_data_generator (long long int n) {
  
  long long int counter = 0;
  for (long long int i = 0; i < n; i++) {
    if (judge_prime(i) != 0){
      prime_data[counter] = i;
      counter++;
    }
  }

  return;
}

int main () {
  long long int input;
  cin >> input;
  long long int output[Max];
  
  prime_data_generator(input);
  int j = 0;
  for(long long int i = 0; prime_data[i] * prime_data[i] < input; i++) {
    if (input % prime_data[i] != 0){
      continue;
    } else {
      output[j] = prime_data[i];
      j++;
      continue;
    }
  }
  int k = 0;

  cout << input << ": ";
  while (output[k] != 0) {
    cout << output[k];
    k++;
  }

  return 0;
}
