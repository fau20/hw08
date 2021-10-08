#include "mystring.h"
#include <stdio.h>

int mystrlen(char *s) {
  int len = 0;
  while(*s) {
    len++;
    s++;
  }
  return len;
}

char * mystrncpy(char *dest, char *source, int n){
  char *d = dest;
  while(n) {
    *dest = *source;
    dest++;
    source++;
    n--;
  }
  *dest = '\0';
  return d;
}

char * mystrcat(char *dest, char *source) {
  char *d = dest;
  while(*dest) {
    dest++;
  }
  while(*source) {
    *dest = *source;
    source++;
    dest++;
  }
  *dest = '\0';
  return d;
}

int mystrcmp(char *s1, char *s2) {
  int count = 0;
  while(*s1) {
    s1++;
    count++;
  }
  int count2 = 0;
  while(*s2) {
    s2++;
    count2++;
  }
  return count-count2;
}
char * mystrchr(char *s, char c){
  while(*s) {
    if(*s == c) return s;
    s++;
  }

  return NULL;
}
