# include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	int rows, columns;
	int random;
	int m,n,x;
	int size, i, found;
	
	printf("enter the number of rows:");
	scanf("%d",&m);
	
	printf("enter the number of columns:");
	scanf("%d",&n);
	
	
	int array[m][n];
	
	srand((unsigned)time(NULL));
	
	for(rows=0;rows<m;rows++)
    {
        for(columns=0;columns<n;columns++)
            {
                random=rand() % (9 - 0 + 1) + 0;;

                array[rows][columns] = random;
                printf("%i",array[rows][columns]);
            }

        printf("\n");
    }
    
    printf("\nEnter element to search: ");
    scanf("%d", &x);
    
    found = 0; 
    
    for(i=0; i<size; i++)
    {
    
        if(array[i] == x)
        {
            found = 1;
            break;
        }
    }


    if(found == 1)
    {
        printf("\n%d is found at position %d", x, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", x);
    }


	return 0;
}
