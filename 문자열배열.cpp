#include <stdio.h>

void main() 
{
	char str[] = "Hello world";
	printf_s("���ڿ� ������\n");
	printf_s("%s\n", str);
	printf_s("���ڿ� ������\n");
	// �ε����� �����Ͽ� ���ڸ� ���� �Ѵ�.
	str[0] = 'K';
	str[1] = 'o';
	str[2] = 'r';
	str[3] = 'e';
	str[4] = 'a';
	printf_s("%s\n", str);
}