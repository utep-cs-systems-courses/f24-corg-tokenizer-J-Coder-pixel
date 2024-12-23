#include "history.h"
#include <stdlib.h>
#include <stdio.h>

/* Initialize the linked list to keep the history. */


List* init_history() {
  List *history = malloc(sizeof(List));
  history->root = malloc(sizeof(Item));;

  return history;
  
}



/* Add a history item to the end of the list.

   List* list - the linked list

   char* str - the string to store

*/
void add_history(List *list, char *str) {
  int i = 1;
  Item *item = list->root;
  while (item) {
    i++;
    item = item->next;
  }
  
  item = malloc(sizeof(Item));
  item->id = i;
  item->str = str;

  printf("Done.");
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
  Item *curr = list->root;
  if (curr == NULL) {
    printf("This list is empty.");
  }
  else {
    while (curr) {
      printf("%d: %s\n", curr->id, curr->str);
      curr->next;
    }
    printf("\n");
  }
  
}



/*Free the history list and the strings it references. */

void free_history(List *list) {
  //  free(*list);
}
