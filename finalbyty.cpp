#include <iostream>
#include <string>
using namespace std;

void sum ( int number1, int number2) {
	cout << number1 + number2;

  
}

int main() {
  string firstName ;
  cout <<"Name :";
  cin >> firstName;
  
  int number1;
  cout << firstName <<"" << "=";
  cin >> number1;
   
   string secondName ;
  cout<<"Name :";
  cin >> secondName;
  
  int number2 ;
   cout << secondName <<"" << "=";
  cin>> number2;

  sum (number1, number2);

  
  return 0;
}
