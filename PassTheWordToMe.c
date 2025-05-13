#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char caract[] = "abcdefghijklmnopqtrsuvwxyzABCDEFGHIJKLMNOPQTRSUVWXYZ1234567890_!@#$%^&*()";
char* caractPtr = caract;


int main(){
  srand(time(NULL));
  
  
  for(int n = 0; n < 8; n++){
  printf("%c", caractPtr[rand() % strlen(caractPtr)]);
  }
  
}