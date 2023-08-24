#include <iostream>
using namespace std;

void echo(){
	cout << "Hello World?\n";
  string name;

  cout << "Enter your name: ";
  getline(cin, name);
  
  cout << name << "\n";
  cout << &name << "\n";
}

int main(){
	echo();
	return 0;
}

