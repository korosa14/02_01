#include <stdio.h>
#include "Enemy.h"

int main()
{

	Enemy teki;

	bool Loop = true;

	int i = 0;

	while (i < 3)
	{
		teki.Update();
		i++;
	}



	return 0;
}