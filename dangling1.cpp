#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int));
 
    // After below free call, ptr becomes a 
    // dangling pointer
    printf("%d \n",ptr);
    
    free(ptr); 
     
    // No more a dangling pointer
    ptr = NULL;
    printf("%d \n",ptr);
}
