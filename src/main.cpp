#include <iostream>

#include <curl/curl.h>

/* Helpers */
/* Constants */
#include "vars.h"
#include "http.h"

using namespace std;

int main(void){
  cout << APP_NAME << "\n";

  CURLcode resGet = httpGet("https://jsonplaceholder.typicode.com/posts");
  CURLcode resPost = httpPost("https://jsonplaceholder.typicode.com/posts");

  cout << resGet << "\n";
  cout << resPost << "\n";
}

