#include <stdio.h>

int main(void)
{
    // %c: 문자. 작은 따옴표로 묶음.
    printf("%c\n", 'A');
	
    // %s: 문자열. 문자열은 변환 문자 없이도 출력이 가능하나, 보통 붙여줌.
    // 문자열은 큰 따옴표로 묶음.
	  printf("%s\n", "A");
    printf("%c은 %s입니다.\n", '1', "first");

	return 0;
}
