#include "sandpiles.h"
/**
 * print_grid - Is printing a 3 x 3 grid
 *
 * @grid: 3 x 3 grid
 *
 * Return: No return void function
 */

void print_grid(int grid[3][3])
{
	int row, col;
	printf("=\n");
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			if (col)
				printf(" ");
			printf("%d", grid[row][col]);
		}
		printf("\n");
	}
}
/**
 * is_stable - Checking if square has more of three rows
 *
 * @grid: 3 x 3 grid
 *
 * Return: 0 if it is stable, 1 if its not unestable
 */
int stable(int grid[3][3])
{
	int row, col;
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			if (grid[row][col] > 3)
			{
				return (0);
			}
		}
	}
	return (1);
}
/**
 * topple - Partitions grains from squares greater than 3
 *
 * @gridfirst: 3 x 3 board
 *
 * @gridsencond: 3 x 3 board
 *
 * Return: Void
 */
void topple(int gridfirst[3][3], int gridsecond[3][3])
{
	int row, col;
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			if (gridfirst[row][col] > 3)
			{
				gridsecond[row][col] -= 4;
				if (row - 1 >= 0)
				{
					gridsecond[row - 1][col]++;
				}
				if (row + 1 <= 2)
				{
					gridsecond[row + 1][col]++;
				}
				if (col - 1 >= 0)
				{
					gridsecond[row][col - 1]++;
				}
				if (col + 1 <= 2)
				{
					gridsecond[row][col + 1]++;
				}
			}
		}
	}
	add_sandpile(gridfirst, gridsecond);
}
