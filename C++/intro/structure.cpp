/*
#include <iostream>
using namespace std;

int main(){
  int n;
  int i = 1;

  cin >> n;
  
  while(i <= n){
    int x = i;

    if(x % 3 == 0){
      cout << " " << x;
    } else if(x % 10 == 3){
      cout << " " << x;
    } else {
      int y = x;
      while(y /= 10){
	if(y % 10 == 3){
	  cout << " " << x;
	} else {
	  
	}
      }
    }
    
    ++i;
  }
  cout << endl;
  return 0;
}
*/

#include <iostream>
using namespace std;

int main(){

  int i = 1;
  int n;

  cin >> n;
  
  while(i <= n){
    int x = i;
    if(x % 3 == 0){
      cout << " " << x;
    } else {
      do{
	if(x % 10 == 3){
	  cout << " " << i;
	  break;
	} else {
	  
	}
      } while(x /= 10);
    }
    i++;
  }

  cout << endl;
  return 0;
}
