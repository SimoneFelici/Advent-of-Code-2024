#include <stdio.h>

#define MAX 100

int	main()
{
	FILE	*file;
	int	left[MAX], right[MAX];
	int	i = 0;

	file = fopen("test.txt", "r");
	while(fscanf(file, "%d %d", &left[i], &right[i]) == 2)
	{
		i++;
	}
	fclose(file);

}
