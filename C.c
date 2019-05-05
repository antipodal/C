
#include <stdio.h>
#include <stdlib.h>

main()
	{
	int a = 1, b = 2;
	char* cp = &a;
	int* ip = &b;

	printf("%x, %x, %x, %x\n", *cp, &cp, cp, *&cp);
	printf("%x, %x, %x, %x\n", *ip, &ip, ip, *&ip);

	return 0;

	}
