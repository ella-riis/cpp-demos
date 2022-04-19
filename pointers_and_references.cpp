#include <iostream>

using namespace std;

void pass_by_value(int);
void pass_by_reference(int&);
void pass_by_pointer(int*);

int main() {

  //Initialize variable
  int myVar = 0;

  //Pass by value
  pass_by_value(myVar);
  cout << "Passed by value: " << myVar << endl;

  //Pass by reference

  pass_by_reference(myVar);
  cout << "Passed by reference: " << myVar << endl;

  //Pass by pointer
  int* myPointer = &myVar;
  pass_by_pointer(myPointer);
  cout << "Passed by pointer: " << myVar << endl;
  

  return 0;
}

void pass_by_value(int val) {
  val = 100;
  cout << "Inside the function: " << val << endl;
}

void pass_by_reference(int& ref) {
  ref = 500;
}

void pass_by_pointer(int* pointer) {
  *pointer = 1000;
}
