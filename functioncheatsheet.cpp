#include <iostream>
using namespace std;

int add(int,int); // so that we can use function that declared above main function
bool isLower(int, int);   // can declared as many function as we want, sort of like variable
void greetUser(); // void for unreturn function
int add(int, int, int); // default value have to be right to left eg : int, int, int = 20
string add(string, string);
void staticFunction();
void notStaticFunction();



int main(){

  cout << add(1, 1) << endl;
  cout << add(2,2,2) << endl;
  cout << add("Goodbye", "World!") << endl;
  cout << isLower(23, 14) << endl;
  greetUser();
  staticFunction();
  staticFunction();
  staticFunction();
  staticFunction();
  staticFunction();
  staticFunction();
  staticFunction();
  staticFunction();
  staticFunction();
  staticFunction();
  cout << "Different between static function and not static function" << endl;
  notStaticFunction();
  notStaticFunction();
  notStaticFunction();
  notStaticFunction();
  notStaticFunction();
  notStaticFunction();
  notStaticFunction();


  return 0;
}

int add(int num1, int num2){
  return num1 + num2;
}

int add (int num1, int num2, int num3){ // overload function which use same name & parameters
  cout << "This is overload function" << endl;
  return num1 + num2 + num3;
}


string add (string x, string y){
  return x + y;
}


bool isLower(int x, int y){
  return x < y; // bool return 1 for true, 0 for false
}

void greetUser(){
  cout << "Overload func with same name but different type (int - string)" << endl;
  cout << "Hello user!" << endl;
}

void staticFunction(){
  static int x = 0;
  x++;
  cout << x << endl;
  cout << "This is the " << x << " times this function run. " << endl;

}

void notStaticFunction(){
  int y = 0;
  y++;
  cout << y << endl;
  cout << "This is the " << y << " times this function run. " << endl;
}
