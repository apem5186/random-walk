/*random walk ±¸Çö*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));
	int number;
	int n = 50/2, m = 50/2;
	int tile[50][50] = { 0 };
	tile[n][m] = 1;
	while((n < 49 && n >= 0) && (m < 49 && m >= 0))
	{
		number = rand() % 8;
		switch (number)
		{
		case 0: tile[n - 1][m] = 1;
			n = n - 1;
			break;
		case 1: tile[n-1][m+1] = 1;
			n = n - 1;
			m = m + 1;
			break;
		case 2: tile[n][m+1] = 1;
			m += 1;
			break;
		case 3: tile[n+1][m+1] = 1;
			n += 1;
			m += 1;
			break;
		case 4: tile[n+1][m] = 1;
			n += 1;
			break;
		case 5: tile[n+1][m-1] = 1;
			n += 1;
			m -= 1;
			break;
		case 6: tile[n][m-1] = 1;
			m -= 1;
			break;
		case 7: tile[n-1][m-1] = 1;
			n -= 1;
			m -= 1;
			break;
		default:
			break;
		}
	}
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			if (tile[i][j] == 0)
			{
				printf(". ");
			}
			else printf("* ");
		}
		printf("\n");
	}

	return 0;
}