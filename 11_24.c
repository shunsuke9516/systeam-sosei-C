#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	printf("Please Enter Password:");
	scanf("%s", a);

	int big = 0;
	int length = strlen(a);
	for (int i = 0; i < length; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			big++;
		}
	}
	int small = 0;
	for (int j = 0; j < length; j++) {
		if (a[j] >= 'a' && a[j] <= 'z') {
			small++;
		}
	}
	int sonota = 0;
	for (int k = 0; k < length; k++) {
		if(!(a[k] >= 'A' && a[k] <= 'Z') && !(a[k] >= 'a' && a[k] <= 'z')){
			sonota++;
		}
	}
	if(strlen(a) >= 8 && strlen(a) <= 16) {
	if (big > 0 && small > 0 && sonota > 0) {
		  printf("条件に合います");
	}
	else {
		  printf("条件に合いません");
	}
	}
	else {
		  printf("条件に合いません");
	}
	return 0;
}#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	printf("Please Enter Password:");
	scanf("%s", a);

	int big = 0;
	int length = strlen(a);
	for (int i = 0; i < length; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			big++;
		}
	}
	int small = 0;
	for (int j = 0; j < length; j++) {
		if (a[j] >= 'a' && a[j] <= 'z') {
			small++;
		}
	}
	int sonota = 0;
	for (int k = 0; k < length; k++) {
		if(!(a[k] >= 'A' && a[k] <= 'Z') && !(a[k] >= 'a' && a[k] <= 'z')){
			sonota++;
		}
	}
	if(strlen(a) >= 8 && strlen(a) <= 16) {
	if (big > 0 && small > 0 && sonota > 0) {
		  printf("条件に合います");
	}
	else {
		  printf("条件に合いません");
	}
	}
	else {
		  printf("条件に合いません");
	}
	return 0;
}
