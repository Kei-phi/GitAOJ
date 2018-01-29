#include <iostream>
using namespace std;
#define data 1024

int expr(int, int, int);
int a[data], b[data];
char op[data];

int main(){

  int counter = 0;

  do{
    cin >> a[counter];
    cin >> op[counter];
    cin >> b[counter];

    counter++;
    
  } while(op[counter-1] != '?');

  for(int i = 0; i < counter - 1; i++){

    cout << expr(a[i], b[i], i) << endl;
  }

  return 0;
}

int expr(int x, int y, int i){

  if(op[i] == '+'){
    return x + y;
  } else if(op[i] == '-'){
    return x - y;
  }else if(op[i] == '*'){
    return x * y;
  }else if(op[i] == '/'){
    return x / y;
  }
}
