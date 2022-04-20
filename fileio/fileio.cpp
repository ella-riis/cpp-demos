#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

struct FileData {
  int num1;
  int num2;
  int num3;
  string message;
};

FileData read_file(ifstream&);

int main() {

  //Get file name from user
  string input_name;
  cout << "Please enter file name: ";
  cin >> input_name;

  //Create file object
  ifstream fin;

  //Attempt to open file
  fin.open(input_name.c_str(), ios::in);

  //What if the file doesn't exist?
  if (!fin.is_open()) {
    cout << "I could not open that file! Exiting now..." << endl;
    return 1;
  }

  //Pass file into a function
  FileData myData = read_file(fin);

  //Get output file name
  string output_name;
  cout << "Where would you like to output?" << endl;
  cin >> output_name;

  //Print to output file
  ofstream fout;
  fout.open(output_name.c_str(), ios::out | ios::app);
  fout << myData.message << endl << "that's all :)" << endl;

  cout << "Check your files now!" << endl;

  return 0;
}

FileData read_file(ifstream& fin) {
   FileData myData;
   fin >> myData.num1;
   fin >> myData.num2;
   fin >> myData.num3;
   fin >> myData.message;

   cout << "The sum of all the numbers in the file is: " << myData.num1 + myData.num2 + myData.num3 << endl;

   return myData;
}
