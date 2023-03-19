#include"push_swap.h"

void	sort(t_mylist list)
{
	int top_a = list.a[arrlen(list.a - 1)];
	int top_b = list.b[arrlen(list.b - 1)];
	int before_top_a = list.a[arrlen(list.a - 2)];
	int before_top_b = list.b[arrlen(list.b - 2)];
	int end_a = list.a[0];
	int end_b = list.b[0];

	if(arrlen(list.b - 1) >= 2)
	{
		if(top_a < end_a && top_b > end_b)
			rr(list);
		if(top_a < before_top_a && top_b > before_top_b)
			ss(list);
	}
}