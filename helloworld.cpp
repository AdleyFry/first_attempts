#include <iostream>

using namespace std;

int main() {

// My first print statements
  cout << "Hello World!" << endl;
  cout << "   /|" << endl;
  cout << "  / |" << endl;
  cout << " /  |" << endl;
  cout << "/___|" << endl;

//Variable definitions
  string characterName = "John";
  int characterAge;
  characterAge = 14;

//using variables in print statements
  cout << "\nThere was once a man named " << characterName << "." << endl;
  cout << "He was " << characterAge << " years old." << endl;
  cout << "He liked the name " << characterName << "." << endl;
  cout << "But he did not like being " << characterAge << "." << endl;

//Exploring the types of information
  char grade = 'A';
  string animal = "Whale";
  int age = 45;
  float siplepi = 3.14;
  double gpa = 2.34344534;
  bool isMale = false;

  const int life = 42;

  return 0;
}
