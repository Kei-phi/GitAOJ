/*
#include <iostream>
using namespace std;

void judge(char *, char *);

char a[1000], b[1000];
int num;
int pa = 0, pb = 0;

int main(){

  cin >> num;

  for(int i = 0; i < num; i++){
    judge(a, b);
  }

  cout << pa << " " << pb << endl;

  return 0;
}

void judge(char *x, char *y){

  cin >> x;
  cin >> y;
  
  int i = 0;
  
  while(x[i] == '\0' || y[i] == '\0'){
    if(x[i] > y[i]){
      pa += 3;
      return;
    } else if(x[i] < y[i]){
      pb += 3;
      return;
    } else {
      i++;
    }
  }
  
  pa += 1;
  pb += 1;

  return;
}
*/

#include <iostream>
using namespace std;

int main(){

  int num;
  cin >> num;
  int pa = 0, pb = 0;
  
  for(int i = 0; i < num; i++){
    string a, b;
    cin >> a >> b;

    if(a > b){
      pa += 3;
    } else if(b > a){
      pb += 3;
    } else{
      pa++;
      pb++;
    }
  }

  cout << pa << " " << pb << endl;
  return 0;
}
