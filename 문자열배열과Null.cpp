#include <stdio.h>

void main() {
	// ����� ������ ���������� ��ǻ�ʹ� ������ �Ұ��� �ϴ�.
	// Beautiful �̶�� �ܾ�� 9����Ʈ ����, 
	// ���� �޸𸮿��� Beautiful\0asdhlashjvalskdfqwpoeihf[pfdas adfawfeasd4a65fweiefashdva534re6asdfgasdfausdf 
	// �� ���� �Է��� �Ǿ� �ִ�.
	// ���� ��ǻ�ʹ� ��ȿ�� ���ڿ��� ������� �𸣱� ������ \0���� ������ ���־� �ձ��� �а� �ȴ�.
	// ���� ���� ���ڿ��� ���� ����  \0 <- 1����Ʈ ���� ������ ���� ��ȯ�Ѵ�.

	char str1[100] = "Beautiful";
	printf_s("1������ : %s\n", str1); 

	// �Ʒ��� ���忡�� �ΰ� \0�� ���ԵǾ� �ִ� ���ڿ��� �ִ�.
	// �Ʒ� ���ڿ��� ����ϸ� Hello ������ ��� �ϴ� ���� �� �� �ִµ�, �̴� �ΰ� ���� ���� �� ���̻�
	char str2[] = "Hello\0World";
	printf_s("2������ : %s\n", str2);
	str2[3] = '\0';
	printf_s("3������ : %s\n", str2);
	str2[0] = '\0';
	printf_s("4������ : %s\n", str2);

}