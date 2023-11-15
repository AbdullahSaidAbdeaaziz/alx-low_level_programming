#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free grid (w X H) from heap
 * @grid: grid (w X H)
 * @height: grid height
 *
 * Return: None
*/

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
