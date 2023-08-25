#include <iostream>

// Helpers
// Constants
#include "vars.h"
#include "make-request.h"

using namespace std;

int main(){
  cout << APP_NAME << "\n";

  makeGetRequest();
	return 0;
}

