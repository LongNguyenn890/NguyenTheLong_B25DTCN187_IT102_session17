#include<stdio.h>
#include<string.h>

int main() {
	char str[50];
	char longest[50];
	fgets(str,50,stdin);
	str[strcspn(str,"\n")] = '\0';
	int length, start = 0, end = 0, maxLen = 0;
	for(int i = 0; i <= strlen(str); i++) {    //hello world
		
		if (str[i] == ' ' || str[i] == '\0' ) {
			length = end - start;
			if (length > maxLen) {
				maxLen = length;
				for(int j = 0; j < length; j++) {
					longest[j] = str[start + j];
				}
				longest[length] = '\0';
			}
			start = end + 1;
			end = start;
		}
		else {
			end++;
		}
	}
	printf("Tu dai nhat: %s\n", longest);
    printf("Do dai: %d\n", maxLen);
	
	return 0;
}
