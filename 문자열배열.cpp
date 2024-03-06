#include <stdio.h>

void main() 
{
	char str[] = "Hello world";
	printf_s("문자열 변경전\n");
	printf_s("%s\n", str);
	printf_s("문자열 변경후\n");
	// 인덱스로 접근하여 문자를 변경 한다.
	str[0] = 'K';
	str[1] = 'o';
	str[2] = 'r';
	str[3] = 'e';
	str[4] = 'a';
	printf_s("%s\n", str);
}