#include<stdio.h>
#include<string.h>

int main() {
	char strA[100],strB[100];
	printf("Nhap chuoi A: ");
	fgets(strA,100,stdin);
	strA[strcspn(strA,"\n")] = '\0';
	printf("Nhap chuoi B: ");
	fgets(strB,100,stdin);
	strB[strcspn(strB,"\n")] = '\0';
	if (strstr(strA,strB) != NULL) {
		printf("B la chuoi con cua A");
	} else {
		printf("B khong la chuoi con cua A");
	}
	
	return 0;
}
