#include <iostream>
using namespace std;

int main(){

  int h[300], w[300];
  int counter = 0;
  
  do{
    cin >> h[counter];
    cin >> w[counter];

    counter++;
  } while(h[counter-1] != 0 || w[counter-1] != 0);

  for(int i = 0; i < counter-1; i++){
    for(int j = 0; j < h[i]; j++){
      for(int k = 0; k < w[i]; k++){
	if((k == 0 || k == w[i] - 1) || (j == 0 || j == h[i] - 1)){
	  cout << "#";
	} else {
	  cout << ".";
	}
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
