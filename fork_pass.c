#include <stdio.h>
#include <unistd.h>

void main()
{
    int pId,n;
    int a[10];
     printf("Parent process\n");
     printf("enter number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    	{	
    		printf("a[%d]",i+1);
    		scanf("%d",&a[i]);
	}
    pId = fork();
    if (pId < 0)
    {
        printf("Process creation is Unsuccessful!");
    }
    // The return value is 0 for a child process
    else if (pId == 0)
    {
     	printf("Chlid process\n"); 
     	printf("Even numbers are [");  
        for(int i=0;i<n;i++){
        if(a[i]%2!=1){
    		printf("%d,",a[i]);
    		}
    		
	}
	printf("]");
    }
    // The return value is positive for a parent process
    else if (pId > 0)
    {
      
    }
}
