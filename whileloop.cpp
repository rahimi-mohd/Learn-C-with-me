#include <iostream>
using namespace std;

int main(){

    int num1, num2;
    cin >> num1;
    cin >> num2;

    while (num1 > 0){
      cout << num1-- << endl; //-- mean - by 1
    }

    // do while (this code will run no matter what happen)
    do {
      cout << num2-- << endl;
    } while(false);
    cout << num2 << endl;
  return 0;
}
