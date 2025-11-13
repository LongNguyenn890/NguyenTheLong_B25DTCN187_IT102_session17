#include<stdio.h>
#include<string.h>

int main() {
	char str1[50],str2[50];
	printf("Nhap chuoi 1: ");
	fgets(str1,50,stdin);
	str1[strcspn(str1,"\n")] = '\0';
	printf("Nhap chuoi 2: ");
	fgets(str2,50,stdin);
	str2[strcspn(str2,"\n")] = '\0';
	strcat(str1, " ");
	printf("%s",strcat(str1,str2));
	
	
	return 0;
}
