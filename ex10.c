#include<stdio.h>
int main(int argc, char *argv[])
{
	int i =0;
	// go through each string in argv
	for (i = 1; i < argc; i++)
	{
		printf("arg %d: %s. \n", i, argv[i]);
	}
	// own array of string.
	char * states[] = {"Uttar Pradesh", "Maharashtra ", "Karnataka", "Kerela", "Kashmir"};
	int num_states = 4; 

	for (i = 0; i < num_states; i++)
	{
		printf("State %d: %s. \n",i,states[i] );
	}

	return 0;
}
