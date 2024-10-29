#include "tokenizer.h"
#include <stdio.h>

int space_char(char c) {
  if (c == '\t' || c == ' ') {
    return 1;
  }
  else {
    return 0;
  }
}

int non_space_char(char c) {
  if (c == '\t' || c == ' ') {
    return 0;
  }
  else {
    return 1;
  }
}

char *token_start(char *str) {
  while(space_char(*str) == 1) {
    *str++;
  }
  if (*str == '\0') {
    return 0;
  }
  return str;
}

int count_tokens(char *str) {
  int count = 0;

  if (space_char(*str) == 0) {
    *str++;
  }
  if (*str == '\0') {
    return count;
  }
  else {
    count++;
  }
}

char *copy_str(char *inStr, short len) {
  int i;
  char *copy_tok;
  while (*inStr != '\0') {
    if(i < len) {
      copy_tok += *inStr;
    }
    i++;
    *inStr++;
  }
  return copy_tok;
}

char **tokenize(char* str) {
  char **tokens[] = {};
  int ind = 0;
  char stri;
  int i;
  while(*str != '\0') {
    if (space_char(*str) == 1) {
      tokens[ind] = stri;
      ind++;
      stri = '';
    }
    stri += *str;
    *str++;
  }
  return *tokens;
}

void print_tokens(char **tokens) {
  while (**tokens != '\0') {
    printf(*tokens);
    **tokens++;
}
}

void free_tokens(char **tokens) {
  int i;
  while (**tokens != '\0') {
    **tokens = 0;
    **tokens++;
  }
}
