#include <iostream>
using namespace std;

int main(){

  float n1, n2, sum;
  char op;
  cout << "Insert first number: " << endl;
  cin >> n1;
  cout << "Choose arithmetic operator" << endl;
  cin >> op;
  cout << "Insert second number: " << endl;
  cin >> n2;

  switch(op){

    case('+'):
      cout << n1 + n2 << endl;
      break;

    case('-'):
      cout << n1 - n2 << endl;
      break;

    case('/'):
      cout << n1 / n2 << endl;
      break;

    case('*'):
      cout << n1 * n2 << endl;
      break;

    //case ('%'):
      //cout << n1 % n2 << endl;
      //break;

    default:
      cout << "Invalid operator" << endl;

  }

  return 0;
}
