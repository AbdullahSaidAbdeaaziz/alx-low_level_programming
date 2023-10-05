#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create grid with width X height
 * @width: width of grid
 * @height: height of grid
 *
 * Return: grid (W X H)
 */

int **
alloc_grid(int width, int height)
{
int i, j, **grid;
grid = malloc(sizeof(*grid) * height);
if (width <= 0 || height <= 0 || grid == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(**grid) * width);
if (grid[i] == 0)
{
while (i--)
{
free(grid[i]);
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
