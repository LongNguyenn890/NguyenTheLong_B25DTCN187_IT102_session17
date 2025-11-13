#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char passWorld[50];
	printf("Nhap mat khau: ");
	fgets(passWorld,50,stdin);
	passWorld[strcspn(passWorld,"\n")] = '\0';
	int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
	
	for(int i = 0; i < strlen(passWorld); i++) {
		if (isupper(passWorld[i])) {
			hasUpper = 1;
		}
		else if (islower(passWorld[i])) {
			hasLower = 1;
		}
		else if (isdigit(passWorld[i])) {
			hasDigit = 1;
		}
		else {
			hasSpecial = 1;
		}
	}
	
	if (strlen(passWorld) >= 8 && hasDigit && hasLower && hasUpper && hasSpecial) {
		printf("Mat khau hop le");
	}
	else {
		printf("Mat khau khong hop le");
	}
	return 0;
}
