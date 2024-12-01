#include <stdio.h>

#define MAX 1000

void	sort(int *array, int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

int	diff(int *left, int *right, int size)
{
	int	i = 0;
	int	sum = 0;
	
	while (i < size)
	{
		if (left[i] > right[i])
		{
		 sum += (left[i] - right[i]);
		}
		else
		{
			sum += (right[i] - left[i]);
		}
		i++;
	}
	return (sum);
}

int	main()
{
	FILE	*file;
	int	left[MAX], right[MAX];
	int	i = 0;
	int	sum = 0;

	file = fopen("input.txt", "r");
	while (fscanf(file, "%d %d", &left[i], &right[i]) == 2)
	{
		i++;
	}
	fclose(file);
	sort(left, i);
	sort(right, i);
	// for (int j = 0; j < i; j++)
	// {
	// 	printf("%d ", left[j]);
	// }
	// printf("\n");
	// for (int j = 0; j < i; j++)
	// {
	// 	printf("%d ", right[j]);
	// }
	// printf("\n");
	sum = diff(left, right, i);
	printf("%d\n", sum);
}
