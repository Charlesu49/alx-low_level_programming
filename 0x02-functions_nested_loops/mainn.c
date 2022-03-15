#include <stdio.h>

int _islower(int c);



int main(void)
{
	int d = 87;
	_islower(d);

	return (0);
}






int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		printf("lower");
		return 1;
	}
	else
	{	
		printf("upper");
		return 0;
	}
}
