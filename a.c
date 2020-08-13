#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define false 0

void main(){
	_Bool wpa_true;
	char id[30];
	char passwd[30];
	char wpa[130];
	do{
	printf("enter your wifi-id : ");
	scanf("%s", id);

	printf("enter your wifi-password : ");
	scanf("%s", passwd);


	strcpy(wpa, "wpa_passphrase ");

	strcat(wpa,id);
	strcat(wpa," ");
	strcat(wpa,passwd);

	}while(system(wpa));

	strcat(wpa, " |sudo tee -a /etc/wpa_supplicant/wpa_supplicant.conf");

	wpa_true=system(wpa);
	if(wpa_true==0) printf("error, check your permission");
	else printf("wifi setup is completed");

}


