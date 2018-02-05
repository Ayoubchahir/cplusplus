//  Copyright (c) 2017  Ayoub CHAHHIR
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP

#include <stdlib.h>
#include <time.h>

void exo1(void)
{
	long a = 2, b = 1, c = 0;
	while (a + b > 0)
	{
		a = a - 2;
		b = b + 1;
		c = c + 1;
	}
}

int essayer_code(unsigned short code)
{
	srand(time(NULL));
	static unsigned short guess = rand() % 10000;

	return (code == guess);
}

unsigned short lancer_de()
{
	srand(time(NULL));
	return (rand() % 6) + 1;
}

void exo3(void)
{

}

void exo4.(void)
{

}

#endif // MY_HEADER_HPP





