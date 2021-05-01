#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void childTask() 
{
		char name[25];

		printf("Enter your name :");
		scanf("%s", name);
		printf("Your name is : %s\n",name);
		exit(0);
}

	void parentTask()
	{
		printf("Job is done\n\n");
	}

    int main(void)
    {
	int i;

	    for(i=0; i<4; i++)
	    {
		    pid_t pid= fork();

    	if(pid==0)
    	{
		    childTask();
	    	return (EXIT_SUCCESS);
	    }
	
	    else
	    {
	        wait(NULL);
	        parentTask();
	    }

	    }
}
