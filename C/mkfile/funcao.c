#include <time.h>
#include <stdlib.h>
int jogar(){
  srand(time(NULL));
  return rand()%100;
}