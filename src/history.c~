#include "history.h"
#include <stdlib.h>
#include <stdio.h>

/* Initialize the linked list to keep the history. */

List* init_history() {
  List *history;
  
}



/* Add a history item to the end of the list.

   List* list - the linked list

   char* str - the string to store

*/

void add_history(List *list, char *str) {
  int i = 0;
  while (list->root != NULL) {
    i++;
    list->root->next;
  }
    
  Item *item = malloc(sizeof(Item));
  if(item == NULL) {
    printf("No memory.");
    exit(1);
  }
  item->id = i;
  item->str = *str;

  if(!list->root) {
    list = (List*) item;
    list->root = (List*) item;
  }
  else {
    list->s_Item->next = item;
    list->Item = item;
  }
}



/* Retrieve the string stored in the node where Item->id == id.

   List* list - the linked list

   int id - the id of the Item to find */

char *get_history(List *list, int id) {
  while (list->root->id != id) {
    list->root->next;
  }
  printf(list->root->str);
}



/*Print the entire contents of the list. */

void print_history(List *list) {
  while(list->root != NULL) {
    printf(list->root->str);
    list->root->next;
  }
}



/*Free the history list and the strings it references. */

void free_history(List *list) {
  //  free(*list);
}
