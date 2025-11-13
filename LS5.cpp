#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main () {
	char str1[50],str2[50];
	printf("Nhap chuoi 1: ");
	fgets(str1,50,stdin);
	str1[strcspn(str1,"\n")] = '\0';
	printf("Nhap chuoi 2: ");
	fgets(str2,50,stdin);
	str1[strcspn(str1,"\n")] = '\0';
	int flag = 1;
	
	if (strlen(str1) != strlen(str2)) {
		printf("Khac nhau");
		return 0;
		
	}
	
	for (int i = 0 ; i < strlen(str1); i++) {
		if ( toupper(str1[i]) != toupper(str2[i]) ) {
			flag = 0;
			break;
		} 
	}
	if (flag) {
		printf("Giong nhau");
	} else {
		printf("Khong giong nhau");
	}
	
	
	return 0;
}
