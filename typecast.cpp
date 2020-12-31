#include <iostream>
using namespace std;

int main(){
  // change from int to string using to_string()

  int x = 20;
  string y = to_string(x);
  cout << y << endl;

  // change from string to int using stoi()

  string q = "1234";
  int w = stoi(q);
  cout << w + 4321 << endl;

  // change from int to float

  int a, s;
  a = 7, s =3;
  cout << (float) a / (float) s << endl;

  // all can assign to variable but im lazy

  return 0;
}
