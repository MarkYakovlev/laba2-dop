#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0, b = 0, i = 0, k=0, j=0, l=0, bool=0,s=0,f=0;
	char str[256];
	printf("Enter the string: ");
	fgets(str, 256, stdin);
	while (str[i] != '\0') {

		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
			a++;
			j = a;
			f = j / 2;	
		}
		else {
			b = i;
			for (k = b - a, l = b - 1; k < l; ++k, --l) {
				if (str[k] == str[l]) {
					bool++;
					s = bool;
				}
			}
			if (s == f || j==1) {
				for (k = b - a; k <= b - 1; k++)
					printf("%c", str[k]);
				printf(" ");
			}
			bool = 0;
			a = 0;
		}
		i++;
	}
	return 0;
}