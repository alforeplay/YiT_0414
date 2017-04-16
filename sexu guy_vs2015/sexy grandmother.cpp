#include "stdio.h"
#include "windows.h"
#include "time.h"

int aegukga()
{
	printf("동해물과 백두산이 마르고 닳도록\n 하느님이 보우하사 우리나라 만세.\n무궁화 삼천리 화려강산 \n대한 사람, 대한으로 길이 보전하세 \n남산 위에 저 소나무, 철갑을 두른 듯 \n바람서리 불변함은 우리 기상일세.\n무궁화 삼천리 화려강산 \n대한 사람, 대한으로 길이 보전하세 \n가을 하늘 공활한데 높고 구름 없이 \n밝은 달은 우리 가슴 일편단심일세.\n무궁화 삼천리 화려강산 \n대한 사람, 대한으로 길이 보전하세 \n이 기상과 이 맘으로 충성을 다하여\n괴로우나 즐거우나 나라 사랑하세.\n무궁화 삼천리 화려강산 \n대한 사람, 대한으로 길이 보전하세.\n");
	return 0;
}

void delay(clock_t sleep)
{ 
    clock_t cur = clock(), el;


    for(;;){              /* 무한루프를 돌린다. */ 
        el = clock();  /* 현재까지 프로그램이 실행된 TICK */
        if((el - cur) > sleep)
            break ;
    }
}




int main()
{
	int i = 0;
	for(i=0;i<=99;i++)
	{
		aegukga();
		printf("지금 국뽕을 %d번 빨고있는 중입니다. 말걸지 말아주십시오. 국뽕이 너무 좋습니다.\n\n",i);
		delay(5);
	}

	//Line 36번의 주석 삭제
	system("pause>nul");
    return 0;
}