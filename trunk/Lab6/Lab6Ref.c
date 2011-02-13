#include <stdio.h>

void change_by_reference(int *x);

int main ()
{
	int a = 20;
	change_by_reference(&a);
	printf("%d\n", a);
	return 0;
}


void change_by_reference(int *x)
{
	*x += 10;
	printf("%d\n", *x);
}
