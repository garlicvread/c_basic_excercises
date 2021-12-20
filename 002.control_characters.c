// 제어 문자(control character) = 비인쇄 문자(NPC,non-printing character)

#include <stdio.h>

int main(void)
{
    // \n: 개행
    printf("Be happy\n");
	
    // \t: 다음 탭 위치로 이동
	printf("12345678901234567890\n");
    
	printf("My\tfriend\n");
    
    // \b: 백스페이스 1회 입력
	printf("Goot\bd\tchance\n");
    
    // \r: 캐리지 리턴, \a: 벨소리
	printf("Cow\rW\a\n");
    
	return 0;
}
