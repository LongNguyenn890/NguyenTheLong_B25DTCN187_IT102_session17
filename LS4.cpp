#include<stdio.h>
#include<string.h>

int main() {
	char str[50],character;
	printf("Nhap chuoi: ");
	fgets(str, 50, stdin);
	str[strcspn(str,"\n")] = '\0';
	printf("Nhap ki tu can xoa: ");
	scanf("%c",&character);
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == character) {
			for (int j = i; j < len ; j++) {
				str[j] = str[j + 1];
			}
			i--;
			len--;
		}
	
	}
	printf("%s",str);
	return 0;
}
