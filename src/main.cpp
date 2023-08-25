#include <iostream>

#include <curl/curl.h>

/* Helpers */
/* Constants */
#include "vars.h"
#include "http.h"

using namespace std;

int main(){
  cout << APP_NAME << "\n";

  /* string response = httpGet(); */
  /* cout << response << std::endl; */

  CURLcode x = httpPost("https://jsonplaceholder.typicode.com/posts");
  cout << x;


	return 0;
}

