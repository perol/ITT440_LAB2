#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

	void childTask() 
	{
		char name[20];

		printf("Enter your name :");
		scanf("%s", name);
		printf("Your name is : %s\n",name);
		exit(0);
	}

	void parentTask()
	{
		printf("Job is Done!\n\n");
	}

    int main(void)
    {
	int i;

	    for(i=1; i<5; i++)
	    {
		    pid_t pid= fork();

    	    if(pid==0)
    	    {
		    childTask();
	    	exit(0);
	        }
	
	        else
	        {
	        wait(NULL);
	        
	        }
	        
	    }
	    parentTask();
	    
return EXIT_SUCCESS;
}
