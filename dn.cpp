#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
	char *mem_alloc;
	//memery allocated dynamically 
	mem_alloc = malloc( 20 *  sizeof(char) );
	
	if (mem_alloc== NULL)
	{
		printf("Couldn,t allocate requested memory \n");
	}
	else 
	{
		strcpy(mem_alloc,"Pan-Atlantic");
	}
	
	printf("Dynamically allocated memory  : %s\n", mem_alloc);
    mem_alloc = realloc (mem-alloc, 100*sizeof(char));
}