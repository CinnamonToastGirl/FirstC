#include <stdio.h>
#include <string.h>

int main(){
  int manas = (int)'y';
  int veins; 
  int counter = 0;

  printf("What number does y represent?: ");
  
  while (!(veins == manas)){
    scanf("%d", &veins);
    counter++; 
    if (((100 <= veins) && (veins < manas)) || ((manas < veins) && (veins <= 150))){
      printf("So Close\n");
    }
    else if (!(veins == manas)){
      printf("Try again\n");
    }
    if (counter >= 5){
      printf("Hint: Just type 121\n");
    }
  }
}