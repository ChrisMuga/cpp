#include <iostream>

/* Helpers */
/* Constants */
#include "vars.h"
#include "make-request.h"

using namespace std;

int main(){
  cout << APP_NAME << "\n";

  /* string response = makeGetRequest(); */
  /* cout << response << std::endl; */

  makePostRequest("https://jsonplaceholder.typicode.com/posts");

	return 0;
}

