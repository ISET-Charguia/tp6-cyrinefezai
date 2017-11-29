/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

int main() {
	int i, j, nbr, m, nbdi, nbdach;

	printf("donnez le nbre des lignes :");
	do {
		scanf("%d", &nbr);
	} while (nbr % 2 == 0);
	m = nbr * 3;
	nbdi = 1;


	for (i = 0; i < nbr / 2; i++) {
		nbdach = (m- nbdi*3) / 2 ;

		for (j = 0; j < nbdach ; j++) {
			printf("-");
		}

		for (j = 0; j < nbdi; j++) {
			printf(".|.");
		}
		for (j = 0; j < nbdach; j++) {
			printf("-");
		}
		printf("\n");
		nbdi = nbdi + 2;

	}
	for(j=0;j<(m/2-3);j++){
	printf("-");}
	printf("welcome");
	for(j=(m/2)+4;j<m;j++){
		printf("-");}
	printf("\n");


			nbdi = nbdi - 2;
	for (i = 0; i < nbr / 2; i++) {
		nbdach = (m-nbdi*3) / 2 ;

		for (j = 0; j < nbdach ; j++) {
			printf("-");
		}

		for (j = 0; j < nbdi; j++) {
			printf(".|.");
		}
		for (j = 0; j < nbdach; j++) {
			printf("-");
		}
		printf("\n");
		nbdi = nbdi - 2;}



	return 0;
}

