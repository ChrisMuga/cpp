#include <iostream>

#include <curl/curl.h>

/* Helpers */
/* Constants */
#include "vars.h"
#include "http.h"

using namespace std;

int main(){
  cout << APP_NAME << "\n";

  string resGet = httpGet("https://jsonplaceholder.typicode.com/users");
  string resPost = httpPost("https://jsonplaceholder.typicode.com/posts");

  cout << "\n" << resGet << "\n";
  cout << "\n" << resPost << "\n";
}

