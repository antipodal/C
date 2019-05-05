
#include <stdio.h>
#include <stdlib.h>

main()
	{
	int a = 1, b = 2;
	char* cp = &a;
	int* ip = &b;
	/* *<-값을 나타 낸다는 의미, &<-주소값 반환 */
	
	printf("%x, %x, %x, %x\n", *cp, &cp, cp, *&cp);
	/* *cp == a, &cp == cp의 주소 값, cp == &a, *&cp == cp(의 주소 값)의 값(==&a)*/
	
	printf("%x, %x, %x, %x\n", *ip, &ip, ip, *&ip);
	return 0;

	}
