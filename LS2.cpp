#include<stdio.h>

#include<string.h>

int main() {
	int choice;
	char str[50];
	printf("Nhap chuoi: ");
	fgets(str,50,stdin);
	str[strcspn(str,"\n")] = '\0';
	printf("1. In ra chuoi voi toan bo ki tu la chu in hoa.\n");
	printf("2. In ra chuoi voi toan bo ki tu la ki tu thuong.\n");
	printf("Nhap lua chon: ");
	scanf("%d",&choice);
	
	switch(choice) {
		case 1: 
			for (int i = 0; i < strlen(str); i++) {
				if (str[i] >= 'a' && str[i] <= 'z') {
					str[i] = str[i] - 32;
				}
				printf("%c",str[i]);
			}
			
			break;
		case 2:
			
			for (int i = 0; i < strlen(str); i++) {
				if (str[i] >= 'A' && str[i] <= 'Z') {
					str[i] = str[i] + 32;
				}
				printf("%c",str[i]);
			}
			break;
	}
	return 0;
}
