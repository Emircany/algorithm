#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
	int sayi[5][3], input[5];
	srand(time(NULL));
	for(int i=0;i<5;i++){
		printf("Sayi gir: ");
		scanf("%d\n", &input[i]);
	}                                               
	for(int i=0;i<5;i++){                                     
		for(int j=0;j<3;j++){
			if(j==0){
				sayi[i][j]=5+rand()%10;
				printf("%4d", sayi[i][j]);
			}
			else if (j==1){
				printf("%4d", sayi[i][j] = input[i]++);
			}
			else{
				printf("%4d", sayi[i][j] = (sayi[i][j-2] * sayi[i][j-1]) + 10);
			}
		}                                         
	printf("\n");                         
	}                                    
}

/*
5'e 3
1. s�tun de�erleri rastgele (5 ile 15 aras�)
2. s�tun de�erleri klavyeden girelecek
3. s�tun de�erleri ilk iki s�tunun de�erlerinin �arp�m�n�n 10 fazlas�
*/
