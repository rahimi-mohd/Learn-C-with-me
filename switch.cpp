#include <iostream>
using namespace std;

int main(){

  //basic of how to use switch
  int n1;
  cout << "Insert a number: " << endl;
  cin >> n1;

  switch (n1) {
    // will print if the value is 10
    case 10:
      cout << "Bigger than 10" << endl;
      break;
    // if the value is 20
    case 20:
      cout<< "Bigger than 20" << endl;
      break;
    // default value mean will print if none of the above
    default:
     cout << "Default value" << endl;
     break;
  }


  return 0;
}
