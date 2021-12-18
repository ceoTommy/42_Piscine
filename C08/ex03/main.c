#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

#include <stdio.h>

int	main()
{
	t_point point;

	set_point(&point);
	printf("x[%d], y[%d]", point.x, point.y);
}
