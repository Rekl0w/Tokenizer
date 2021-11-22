#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[]) {

	char ch;
	FILE *fp;
	char dosya[1000];
 
	printf("Okumak istediginiz dosyanin yolunu giriniz: ");
	scanf("%s", dosya);
	
	if ((fp = fopen(dosya, "r")) == NULL){
 	
		printf("Dosya acilamadi...\n");
 
		}else {
 	
	 		while(ch!= EOF) {
 				
				ch=fgetc(fp);
 				printf("%c, ", ch);
 
	 			}
 			}

	return 0;
}
