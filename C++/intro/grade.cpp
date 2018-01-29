#include <iostream>
using namespace std;
#define num 1024

char grade(int);

class Student{
public:
  int mid;
  int fin;
  int mutest;

  Student();
};

Student::Student(){
  int mid = -1;
  int fin = -1;
  int mutest = -1;
}

class Student student[num];

int main(){

  int i = 0;

  do{
    
    cin >> student[i].mid;
    cin >> student[i].fin;
    cin >> student[i].mutest;

    ++i;
    
  } while (student[i-1].mid != -1 || student[i-1].fin != -1 || student[i-1].mutest != -1);

  i = i-1;
  
  for(int j = 0;j < i; j++){
    cout << grade(j) << endl;
  }

  return 0;
}

char grade(int i){
  if(student[i].mid == -1 || student[i].fin == -1){
    return 'F';
  } else if(student[i].mid + student[i].fin >= 80){
    return 'A';
  } else if(student[i].mid + student[i].fin >= 65){
    return 'B';
  } else if(student[i].mid + student[i].fin >= 50 ||(student[i].mid + student[i].fin >= 30 && student[i].mutest >= 50)){
    return 'C';
  } else if(student[i].mid + student[i].fin >= 30 && student[i].mutest < 50){
    return 'D';
  } else{
    return 'F';
  }
}
