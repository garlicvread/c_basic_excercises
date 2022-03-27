#include <stdio.h>

int main(void)
{
    // %d: 정수 출력
    printf("%d\n", 10);
    
    // %lf: 실수 출력. 기본값은 소수점 여섯 번째 자리까지 출력
    printf("%lf\n", 3.4);
    
    // 소수점 자리 조절: % 기호와 lf 사이에 [.숫자] 형식으로 옵션을 줘야 한다.
    printf("%.1lf\n", 3.45);
    printf("%.10lf\n", 3.4);
    
    // 응용
    printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10+20);
    printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4-1.2);
    

	return 0;
}
