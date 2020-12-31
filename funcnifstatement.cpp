#include <iostream>
using namespace std;

float getMax(int num1, int num2, int num3){


float result;
if(num1 >= num2 && num1 >= num3){
  result = num1;
} else if (num2 > num1 && num2 > num3){
  result = num2;
} else{
  result = num3;
}

  return result;
}


int main(){

  float num1, num2, num3;

  cout << "Insert first number: " << endl;
  cin >> num1;
  cout << "Insert second number: " << endl;
  cin >> num2;
  cout << "Insert third number: " << endl;
  cin >> num3;
  cout << "The greatest number is: " << getMax(num1, num2, num3) << endl;
  return 0;
}
