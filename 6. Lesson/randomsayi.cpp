#include <stdio.h>
#include <conio.h>
#include <time.h> 
#include <stdlib.h>

main(){
	int sayi;
	srand (time(NULL));
  	int r = 5 + rand() % 295;//5 ile 295 aras�nda 295 dahil de�il.
  	printf("%d\n", r);
}
