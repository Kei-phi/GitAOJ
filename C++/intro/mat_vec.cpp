#include <iostream>
using namespace std;

int calcmat(int);

int M[100][100];
int *vec;
int i;
int j;

int main(){

  cin >> i;
  cin >> j;

  //  M = new int[i][j]//あかんっぽい
  
  vec = new int[j];
  
  for(int k = 0; k < i; k++){
    for(int l = 0; l < j; l++){
      cin >> M[k][l];
    }
  }

  for(int k = 0; k < j; k++){
    cin >> vec[k];
  }

  for(int k = 0; k < i; k++){
    cout << calcmat(k) << endl;
  }

  return 0;
}

int calcmat(int k){
  int ans = 0;
  for(int l = 0; l < j; l++){
    ans += M[k][l] * vec[l];
  }

  return ans;
}

