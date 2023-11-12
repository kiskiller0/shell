#include <stdio.h>
#include "main.h"


int main(int ac, char **argc, char **env)
{
	printf("%s\n", getenvvar("PATH", env));
	return (0);
}
