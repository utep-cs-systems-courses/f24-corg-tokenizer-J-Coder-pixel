#include "tokenizer.h"
#include "history.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define limit 100

void main(void) {

  char input[limit];
  List* history = init_history();
  char** tok;

  while(*input != 't') {
    printf("&");
    fgets(input, limit, stdin);
    printf("\n");

    if(*input != '!') {
      printf("String: %s", &input);
      tok = tokenize(input);
      printf("Tokenized version:\n");
      print_tokens(tok);
      add_history(history,input);
    }
    else {
      printf("All inputed Strings:\n");
      print_history(history);
    }
  }
  free_tokens(tok);
  free_history(history);
  printf("Exiting program...");
}
      /*     
  if (token == "history") {
    print_history(list);
  }
  
  if (token == "!") {
    *get_history(list,(char *)token);
  }
  
  printf("Token: %d",token);
  add_history(list,(char *)token);

  **tokenize(token);
  

 done:
  return 0;
}
*/
