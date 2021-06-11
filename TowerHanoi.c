//Write a recursive program for tower of Hanoi problem. Harshpreet Singh(049)

#include <stdio.h>

void towerOfHanoi(int n, char x, char z, char y)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", x, z);
		return;
	}
	towerOfHanoi(n-1, x, y, z);
	printf("\n Move disk %d from rod %c to rod %c", n, x, z);
	towerOfHanoi(n-1, y, z, x);
}

int main()
{
	int n;
	printf(" Enter a Number: ");
	scanf("%d",&n);
	towerOfHanoi(n,'x', 'z', 'y');
	return 0;
}
