#include <stdio.h>

void change_by_value(int x);

int main ()
{
	int a = 20;
	change_by_value(a);
	printf("%d\n", a);
	return 0;
}


void change_by_value(int x)
{
	x += 10;
	printf("%d\n", x);
}
