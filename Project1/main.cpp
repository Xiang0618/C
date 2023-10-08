#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i, j, n;

	printf("*********\n");

	for (n = 0; n < 7; n++)
		printf("*       *\n");

	printf("*********\n\n"); //方形

	printf("   ***  \n");
	printf(" *     * \n");

	for (n = 0; n < 5; n++)
		printf("*       *\n");

	printf(" *     * \n");
	printf("   ***  \n\n"); //橢圓

	printf("  *\n");
	printf(" ***\n");
	printf("*****\n");

	for (n = 0; n < 6; n++)
		printf("  *\n"); //箭頭

	printf("    *\n");
	printf("   * *\n");
	printf("  *   *\n");
	printf(" *     *\n");
	printf("*       *\n");
	printf(" *     *\n");
	printf("  *   *\n");
	printf("   * *\n");
	printf("    *\n");//菱形

	return 0;
}