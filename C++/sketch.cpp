/*// cin01.cpp
#include <iostream>
using namespace std;

int main(){
  int x, y;

  cout << "xの値(整数値)を入力--->";
  cin >> x;
  cout << "yの値(整数値)を入力--->";
  cin >>y;
  cout << "あなたが入力したのは" << x << "と" << y << "ですね!" << endl;
  cout << "その合計は" << x+y << "です．" << endl;
  
  return 0;
}*/

/*// cin02.cpp
#include <iostream>

using namespace std;

int main (){
  int x, y;

  cout << "x yを入力してください" << endl;
  cin >> x >> y;
  cout << "x = " << x << ", y = " << y << endl;

  return 0;
}*/

/*// op01.cpp
#include <iostream>
using namespace std;

int main (){
  int i;
  cout << "「i=20」の式の値は" << (i=20) << "です．" << endl;
  i=1.9;
  cout << i << endl;
  return 0;
}
*/

/*
// inc01.cpp
#include <iostream>
using namespace std;

int main (){

  int a = 10;

  cout << "a = " << ++a << endl;
  cout  << "a = " << a << endl;

  return 0;
}
*/

/*
// as01.cpp
#include <iostream>
using namespace std;

int main (){
  int a1, a2, a3, a4, a5;

  a1 = 5;
  a1 = a1 + 2;
  cout << "a1 = " << a1 << endl;

  a2 = 5;
  a2 += 2;
  cout << "a2 = " << a2 << endl;

  a3 = 5;
  a3 = a3++ + 2;
  cout << "a3 = " << a3 << endl;
  cout << "a3 = " << a3 << endl;

  a4 = 5;
  cout << "a4 = " << a4++ + 2 << endl;

  a5 = 5;
  cout << "a5 = " << (a5++ + 2) << endl;
  cout << "a5 = " << a5 << endl;

  int a = 10;
  cout << "a = " << a++ << endl;
  cout << "a = " << a << endl;

  return 0;
}
*/

/*
// bit02.cpp
#include <iostream>
using namespace std;
#define CAT 1
#define DOG 2
#define RAT 4
#define RABBIT 8

int main(){
  int a = CAT | DOG;
  int b = RAT;
  int c = CAT | DOG | RAT | RABBIT;
  int d = DOG | RAT;

  cout << "A " << "猫: " << ((a & CAT) != 0)
       << ", 犬: " << ((a & DOG) != 0)
       << ", ネズミ: " << ((a & RAT) != 0)
       << ", ウサギ: " << ((a & RABBIT) != 0)
       << endl;
  cout << "B " << "猫: " << ((b & CAT) != 0)
       << ", 犬: " << ((b & DOG) != 0)
       << ", ネズミ: " << ((b & RAT) != 0)
       << ", ウサギ: " << ((b & RABBIT) != 0)
       << endl;
  cout << "C " << "猫: " << ((c & CAT) != 0)
       << ", 犬: " << ((c & DOG) != 0)
       << ", ネズミ: " << ((c & RAT) != 0)
       << ", ウサギ: " << ((c & RABBIT) != 0)
       << endl;
  cout << "D " << "猫: " << ((d & CAT) != 0)
       << ", 犬: " << ((d & DOG) != 0)
       << ", ネズミ: " << ((d & RAT) != 0)
       << ", ウサギ: " << ((d & RABBIT) != 0)
       << endl;
  return 0;
}
*/

/*
// shift01.cpp
#include <iostream>
using namespace std;

int main(){
  short a = 12, b = 100, c = -50;

  cout << a << "を左に1ビットシフト --- " << (a << 1) << endl;
  cout << "さらに1ビット左シフト --- " << (a << 2) << endl;
  cout << "さらに1ビット左シフト --- " << (a << 3) << endl;
  cout << "さらに1ビット左シフト --- " << (a << 4) << endl;
  cout << endl;
  cout << b << "を右に1ビットシフト --- " << (b >> 1) << endl;
  cout << "さらに1ビット右シフト --- " << (b >> 2) << endl;
  cout << "さらに1ビット右シフト --- " << (b >> 3) << endl;
  cout << "さらに1ビット右シフト --- " << (b >> 4) << endl;
  cout << "処理依存" << endl;
  cout << c << "を左に1ビットシフト --- " << (c << 1) << endl;
  cout << c << "を右に1ビットシフト --- " << (c >> 1) << endl;
  cout << endl;

  return 0;
}
*/
/*
// conditional01.cpp
#include <iostream>
using namespace std;

int main(){
  (3 > 5) ? (cout << "3は5より大きい．" << endl) :
    (cout << "3は5より大きくない．" << endl);

  return 0;
}
*/

/*
// nyujyoryo.cpp
#include <iostream>
using namespace std;

int main(){
  int age;

  cout << "この度は猫でもランドとかいうあほみたいなところに" << endl;
  cout << "来てるあなたは大丈夫ですか，試験勉強は?" << endl;

  cout << "----------------------------------------" << endl;
  cout << "年齢を入力してください---";

  cin >> age;

  if (age < 6){
    cout << "無料だよやったね！" << endl;
  } else {
    cout << "5兆円よこせ．" << endl;
  }

  cout << "----------------------------------------" << endl;
  cout << "試験勉強しような．" << endl;

  return 0;
}
*/

/*
// logical01.cpp
#include <iostream>
using namespace std;

int main (){

  int a = 2;
  int b = 0;

  if (a == 2 && b++){
    cout << "b = " << b << endl;
  } //こうしたとき，b++の値は0らしい．ifを抜けると1になる．

  cout << "b = " << b << endl;
  
  return 0;
}
*/
/*
// switch02.cpp
#include <iostream>
using namespace std;

int main (){

  int c = 0;
  char buf[16];
  bool end = false;

  while (1){
    cout << "***** MENU *****" << endl;
    cout << "A: Game" << endl;
    cout << "B: Music" << endl;
    cout << "C: Excel" << endl;
    cout << "X: Exit" << endl;
    cout << "***************" << endl;
    cout << "----->" ;

    while (1){
      cin.getline(buf, 16);
      c = buf[0];
      // ここのif文をコメントアウトすると，\nを入力したときにハングる
      if (c != '\n'){
	break;
      }
    }

    switch (c){
    case 'A':
    case 'a':
      cout << endl;
      cout << "ゲームしてる暇ある?" << endl;
      cout << endl;
      break;

    case 'B':
    case 'b':
      cout << endl;
      cout << "Musik hören" << endl;
      cout << endl;
      break;

    case 'C':
    case 'c':
      cout << endl;
      cout << "百ます計算" << endl;
      cout << endl;
      break;

    case 'X':
    case 'x':
      cout << endl;
      cout << "しゅうりょー" << endl;
      cout << endl;
      end = 1;
      break;
    default:
      cout << endl;
      cout << "ふせいなにゅうりょくです" << endl;
      cout << endl;
      break;
    }
    if (end){
      break;
    }
  }

  return 0;
}
*/

/*
// cos01.cpp
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define pi 3.14


int main(){

  int i =0, j = 0;
  int diff = 5;
  double rad =0, cosvalue = 0;

  cout << "角度\t cos値 \t イメージ" << endl;

  for (i = 0; i < 70; i++){
    cout << "-";
  }
  for (i = 90; i >= 0; i -= diff){
    rad = (pi * i) / 180;
    cosvalue = cos(rad);
    cout << endl;
    cout << setw(2) << i << "\t"
	 << fixed << setprecision(6) << cosvalue;
    for (j = 1; j <= (int)(cosvalue * 40); j++){
      cout << "*";
    }
  }
  cout << endl;
  return 0;
}
*/
/*
// function01.cpp
#include <iostream>
using namespace std;

int func(int, int);

int main(){
  int a, b,  c;

  a = 10;
  b = 20;
  c = func(a, b);
  cout << a << "x" << b << "=" << c << endl;

  return 0;
}

int func(int a, int b){
  int c;
  c = a * b;
  return c;
}
*/
/*
// var01.cpp
#include <iostream>
using namespace std;

int main(){

  // int n = 0;

  while (1){
    static int n; // = 0;
    cout << n << endl;
    n++;
    if (n > 5){
      break;
    }
  }

  return 0;
}

*/
/*
// overload02.cpp
#include <iostream>
using namespace std;

int func(int a, int b = 10, int c = 20);
int func(int x);

int main(){

  int n;
  cout << "整数値を入力---";
  cin >> n;

  cout << "func(n, 20)の値: " << func(n, 20) << endl;
  //  cout << "func(5)" << func(5) << endl;
  
  return 0;
}

int func(int a, int b, int c){

  return a * b * c;
}

int func(int x){

  return x * x;
}
*/
/*
// pointer01.cpp
#include <iostream>
using namespace std;

int main(){

  int a = 0;
  int *lpa;
  lpa = &a;

  cout << "適当な整数値を入力してください----";
  cin >> a;

  cout << "変数aに" << a << "が代入されました" << endl;
  cout << "変数aのアドレスは" << &a << endl;
  cout << "*lpaの値は" << *lpa <<endl;

  return 0;
}
*/
/*
// pointer02.cpp
#include <iostream>
using namespace std;

int main(){

  int *pa;
  int a = 0;

  pa = &a;
  *pa = 5;

  cout << "*pa = " << *pa << endl;
  cout << "a = " << a << endl;

  return 0;
}
*/
/*
// swap01.cpp
// 有名なダメプログラムらしい
#include <iostream>
using namespace std;

void swap(int, int);

int main(){

  int a = 10, b = 30;

  swap(a, b);

  cout << "a = " << a << ", b = " << b << endl;

  return 0;
}

void swap(int a, int b){

  int c;

  c = b;
  b = a;
  a = c;

  return;  
}
*/
/*
// swap02.cpp
// 有名なダメプログラムを修正したもの
#include <iostream>
using namespace std;

void swap(int *, int *);

int main(){

  int a = 10, b = 30;

  swap(&a, &b);

  cout << "a = " << a << ", b = " << b << endl;

  return 0;
}

void swap(int *a, int *b){

  int c;

  c = *b;
  *b = *a;
  *a = c;

  return;  
}
*/
/*
// string01.cpp
#include <iostream>
using namespace std;

int main(){

  //  char *str;
  //  str = "ABC";

  const char *str = "ABC";
  // http://dixq.net/forum/viewtopic.php?f=3&t=11845 によると，文字列は書き換え不能なので，const を付けて宣言しないといけないっぽい
  int i;
  for(i = 0; i <= 2; i++){
    cout << "*(str + " << i << ") = " << *(str + i) << endl;
  }
  for(i = 0; i <= 2; i++){
    cout << "str[" << i << "] = " << str[i] << endl;
  }

  return 0;
}
*/
/*
// strinput02.cpp
#include <iostream>
using namespace std;

int main(){

  char str[256];

  cout << "文字列を入力してください---";
  cin.getline(str, 256);
  cout << "str = " << str << endl;

  return 0;
}
*/
/*
// srcoy01.cpp
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main(){

  char str[] = "ABC";

  cout << str << endl;
  strcpy(str, "def");
  cout << str << endl;

  return 0;
}
*/
/*
// strcat01.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main(){

  char name[64], sama[] = "様";

  cout << "May I have your name, please? --- ";
  cin.getline(name, 64);

  strcat(name, sama);

  cout << name << "ですね，お待ちしておりました．" << endl;

  return 0;
}
*/
/*
// sstring01.cpp
#include <iostream>
#include <cstring>
using namespace std;

int main(){

  const char *(str[6]) = {
    "abc",
    "de",
    "fghi",
    "jklmnop",
    "qrs",
    "tuvwxyz",
  };
  int i = 0;

  for(i = 0; i < 6; i++){
    cout << str[i];
  }
  cout << endl;
  for(i = 0; i < 6; i++){
    cout << &str[i] << "  ";
  }
  cout << endl;

  return 0;
}
*/
/*
// new01.cpp
#include <iostream>
using namespace std;

int main(){

  int n;
  int *p;
  
  cout << "number of memory you need --- ";
  cin >> n;

  p = new int[n];

  for(int i = 0; i < n; i++){
    cout << i + 1 << "th datum input --- ";
    cin >> p[i];
  }
  
  for(int i = 0; i < n; i++){
    cout << i + 1 << "th datum is " << p[i] << endl;
  }

  delete [] p;

  return 0;  
}
*/
/*
// new02.cpp
// how to get numbers in a line separated with space
#include <iostream>
using namespace std;

int main(){

  int n;
  int *p;
  
  cout << "number of memory you need --- ";
  cin >> n;

  p = new int[n];

  for(int i = 0; i < n; i++){
    cin >> p[i];
    // this seems ok
  }
  
  for(int i = 0; i < n; i++){
    cout << i + 1 << "th datum is " << p[i] << endl;
  }

  delete [] p;

  return 0;  
}
*/
/*
// gcd program
#include <iostream>
using namespace std;

int gcd(int, int);

int main(){

  int x, y;

  cout << "two integer input --- ";
  cin >> x;
  cin >> y;

  cout << gcd(x, y)<< endl;

  return 0;
}

// where of this is wrong?
int gcd(int x, int y){
  int r = 0;
  
  if(x > y){
    r = x % y;
    x = y;
    y = r;
    while(r != 0){
      gcd(x, y);
    }
  } else if(x <= y){
    r = y % x;
    x = y;
    y = r;
    while(r != 0){
      gcd(x, y);
    }
  }

  return x;
}

int gcd(int x, int y){
  int r;
  if(x < y){
    int temp;
    temp = x;
    x = y;
    y = temp;
  }
  r = x % y;
  while(r != 0){
    x = y;
    y = r;
    r = x % y;
  }
  return y;
}
*/

/*
// simpleclass01.cpp
#include <iostream>
using namespace std;

class MyClass{
private:
  int a;
public:
  int b;
  int set_a();
  int show_a();
};

int MyClass::set_a(){

  cout << "a --->";
  cin >> a;
  return 0;
}

int MyClass::show_a(){

  cout << a << endl;
  return 0;
}

int main(){

  MyClass mc;

  mc.b = 100;
  cout << "b = " << mc.b << endl;

  mc.set_a();
  mc.show_a();

  return 0;
}
*/
/*
// class01.cpp
#include <iostream>
using namespace std;

class BMI{
private:
  double bw;
  double  bl;
  double bmi;

public:
  int setdata();
  int showbmi();
};

int BMI::showbmi(){

  cout << "BMI = " << bmi << endl;
  return 0;
}

int BMI::setdata(){

  cout << "身長 (m) --- ";
  cin >> bl;
  cout << "体重 (kg) --- ";
  cin >> bw;
  bmi = bw /(bl * bl);

  return 0;
}

int main(){

  BMI b;

  b.setdata();
  b.showbmi();

  return 0;
}
*/
/*
// objptr01.cpp
#include <iostream>
using namespace std;

class MyClass{
private:
  int x;
public:
  int setx();
  int showx();
};

int MyClass::setx(){

  cout << "xの値を入力: ";
  cin >> x;
  return 0;
}

int MyClass::showx(){

  cout << "x = " << x << endl;
  return 0;
}

int main(){
  MyClass *ptr;
  MyClass mc;
  ptr = &mc;

  ptr -> setx();
  ptr -> showx();

  mc.showx();

  return 0;
}
*/
/*
// constructor02.cpp
#include <iostream>
#include <cstring>
using namespace std;
// warning: deprecated conversion from string constant to 'char*' が出る
class Person{
private:
  char name[32];
  int age;
  char sex;
public:
  Person(char *, int, char);
  int show();
};

Person::Person(char *nm, int n, char s){

  strcpy(name, nm);
  age = n;
  sex = s;
  
}

int Person::show(){

  cout << "氏名: " << name << endl;
  cout << "年齢: " << age << "歳" << endl;
  cout << "性別: " << sex << endl;

  return 0;
}

int main(){

  Person Yamada("山田太郎", 26, 'M');
  Person Tanaka("田中花子", 24, 'F');

  cout << "--------------------" << endl;
  Yamada.show();
  cout << "--------------------" << endl;
  Tanaka.show();
  cout << "--------------------" << endl;

  return 0;
}
*/
/*
// constructor04.cpp
#include <iostream>
using namespace std;

class Area{
private:
  double area;
public:
  Area(double a = 0.0, double b = 0.0, double c = 0.0);
  double show();
};

Area::Area(double a, double b, double c){
  int no = 0;

  if(a != 0.0){
    no++;
  } else {
    
  }
  if(b != 0.0){
    no++;
  } else {
    
  }
  if(c != 0.0){
    no++;
  } else {
    
  }

  switch(no){
  case 1:
    area = a * a * 3.14;
    break;
  case 2:
    area = a * b;
    break;
  case 3:
    area = (a + b) * c / 2.0;
    break;
  default:
    area = 0.0;
    break;
  }
  
}

double Area::show(){
  return area;
}

int main(){
  Area circ(3), rectangle(2, 5), tranpezoid(1, 3, 5);

  cout << "半径3の円の面積: " << circ.show() << endl;
  cout << "縦2，横5の長方形の面積: " << rectangle.show() << endl;
  cout << "上底1，下底3，高さ5の台形の面積: " << tranpezoid.show() << endl;

  return 0;
}
*/
/*
// copyconstructor02.cpp
#include <iostream>
using namespace std;

class MyClass{
private:
  int x;
  int y;
public:
  MyClass(int m, int n);
  MyClass(const MyClass &n);
  int show();
};

MyClass::MyClass(int m, int n){
  x = m;
  y = n;
}

MyClass::MyClass(const MyClass &otherobj){
  x = otherobj.x;
  y = 0;
}

int MyClass::show(){

  cout << "x = " << x << ", ";
  cout << "y = " << y << endl;
  return 0;
}

int main(){
  MyClass a(10, 100);
  MyClass b = a;

  a.show();
  b.show();

  return 0;
}
*/
/*
// this01.cpp
#include <iostream>
using namespace std;

class MyClass{
private:
  int x;
public:
  int setx(int n);
  int readx(int *pn);
};

int MyClass::setx(int n){

  this -> x = n;
  return 0;
}

int MyClass::readx(int *pn){

  *pn = this -> x;
  return 0;
}

int main(){

  MyClass mc;

  mc.setx(10);
  int num;
  mc.readx(&num);
  cout << "x = " << num << endl;

  return 0;
}
*/
/*
// static01.cpp
#include <iostream>
using namespace std;

class Meibo{

private:
  char name[32];
  double bw;
  double bl;
public:
  static double bw_total;
  static double bl_total;
  void setdata();
  
};

double Meibo::bw_total = 0;
double Meibo::bl_total = 0;

void Meibo::setdata(){
  cout << "氏名 -- ";
  cin >> name;

  cout << "体重 -- ";
  cin >> bw;

  cout << "身長 -- ";
  cin >> bl;

  bw_total += bw;
  bl_total += bl;
}

int main(){

  Meibo people[3];

  for(int i = 0; i < 3; i++){
    people[i].setdata();
    
  }

  cout << "体重の合計は" << Meibo::bw_total <<endl;
  cout << "身長の合計は" << Meibo::bl_total << endl;

  return 0;
}
*/

// 
