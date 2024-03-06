#include <stdio.h>

void main() {
	// 사람은 구문이 가능하지만 컴퓨터는 구분이 불가능 하다.
	// Beautiful 이라는 단어는 9바이트 지만, 
	// 실제 메모리에는 Beautiful\0asdhlashjvalskdfqwpoeihf[pfdas adfawfeasd4a65fweiefashdva534re6asdfgasdfausdf 
	// 과 같이 입력이 되어 있다.
	// 따라서 컴퓨터는 유효한 문자열이 어디인지 모르기 때문에 \0으로 구분을 해주어 앞까지 읽게 된다.
	// 따라서 실제 문자열의 저장 값은  \0 <- 1바이트 값을 포함한 값을 반환한다.

	char str1[100] = "Beautiful";
	printf_s("1번문장 : %s\n", str1); 

	// 아래의 문장에서 널값 \0이 포함되어 있는 문자열이 있다.
	// 아래 문자열을 출력하면 Hello 까지만 출력 하는 것을 알 수 있는데, 이는 널값 까지 읽은 뒤 더이상
	char str2[] = "Hello\0World";
	printf_s("2번문장 : %s\n", str2);
	str2[3] = '\0';
	printf_s("3번문장 : %s\n", str2);
	str2[0] = '\0';
	printf_s("4번문장 : %s\n", str2);

}