#include <iostream>

#include <curl/curl.h>

/* Helpers */
/* Constants */
#include "vars.h"
#include "http.h"

using namespace std;

int main(){
  cout << APP_NAME << "\n";

  CURLcode res = httpPost("https://jsonplaceholder.typicode.com/posts");
  cout << res;

	return 0;
}

