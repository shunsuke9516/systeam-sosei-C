#include<stdio.h>　//一文字判定
int main(void)
{
	
	char x;
	printf("アルファベットを入力");
	scanf_s("%c", &x);
	if ((x >= 'A') && (x <= 'Z'))
	{
		printf("大文字が含まれています\n");
	}
	else
	{
		printf("大文字が含まれていません\n");
	}
	return 0;
	
}
