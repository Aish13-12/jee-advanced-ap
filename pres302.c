#include <stdio.h>
#include <stdlib.h>
          //including stdio.h for printf and other functions


int main()                        //default function for call
{
	FILE *fp;
    fp = fopen("cosr.dat", "r");

    //read file into array
    double numberArray[10],j;
    int i,n=10;

    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%lf", &numberArray[i]);
    }

        
	
	
	
     
        
        
      
	for ( i = 0; i < n; i++)                     //Loop for ascending ordering
	{
		for (int j = 0;j < n; j++)             //Loop for comparing other values
		{
			if (numberArray[j] > numberArray[i])                //Comparing other array elements
			{
				float tmp = numberArray[i];         //Using temporary variable for storing last value
				numberArray[i] = numberArray[j];            //replacing value
				numberArray[j] = tmp;    
				         
			} 
			
			 
		}
	}
	                     //Printing message
	//for (int i = 0; i < n; i++)                     //Loop for printing array data after sorting
	//{
		//printf(" %lf\n", numberArray[i]);
	//}
	
double remove_duplicate_elements(double numberArray[], int n)
{

if (n==0 || n==1)
return n;

double temp[n];

int j = 0;
int i;
for (i=0; i<n-1; i++)
if (numberArray[i] != numberArray[i+1])
temp[j++] = numberArray[i];
temp[j++] = numberArray[n-1];

for (i=0; i<j; i++)

numberArray[i] = temp[i];

return j;
}









remove_duplicate_elements(numberArray, n);


for (i=0; i<n-1; i++)
printf("%lf\n",numberArray[i]);

printf("Difference\n");
	
	for (i=0;i<n-2;i++)
	{
		j=numberArray[i+1]-numberArray[i];
		printf("%lf\n",j);
		
	}
	

return 0;
}
	                                      //returning 0 status to system

