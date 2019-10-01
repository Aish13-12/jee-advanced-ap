double **createMat(int m,int n);
void readMat(double **p, int m,int n);
void print(double **p,int m,int n);
double **loadtxt(char *str,int m,int n);
double linalg_norm(double **a, int m);
double **linalg_sub(double **a, double **b, int m, int n);
double **linalg_inv(double **mat, int m);
double **matmul(double **a, double **b, int m, int n, int p);
double **transpose(double **a,  int m, int n);
void uniform(char *str, int len);
void gaussian(char *str, int len);
double mean(char *str,int len);
double mean(char *str,int len);
void solsin(char *str, float value,int m,int n);
void solution(char *str1,char *str2,int n,int m,int p,double c);
void ascendingo(char *str1,char *str2,int n);
double remove_repeated_elements(char *str1,char*str2,int n);
void difference(char*str1,char*str2,int n);
void mergingfiles(char*str1,int n1,char*str2,int n2,char*str3);
void solcos(char *str,float value,int m,int n);

//End function declaration


//Defining the function for matrix creation
double **createMat(int m,int n)
{
 int i;
 double **a;
 
 //Allocate memory to the pointer
a = (double **)malloc(m * sizeof( *a));
    for (i=0; i<m; i++)
         a[i] = (double *)malloc(n * sizeof( *a[i]));

 return a;
}
//End function for matrix creation


//Defining the function for reading matrix 
void readMat(double **p, int m,int n)
{
 int i,j;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%lf",&p[i][j]);
  }
 }
}
//End function for reading matrix

//Read  matrix from file
double **loadtxt(char *str,int m,int n)
{
FILE *fp;
double **a;
int i,j;


a = createMat(m,n);
fp = fopen(str, "r");

 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   fscanf(fp,"%lf",&a[i][j]);
  }
 }
//End function for reading matrix from file

fclose(fp);
 return a;

}


//Defining the function for printing
void print(double **p, int m,int n)
{
 int i,j;

 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  printf("%lf ",p[i][j]);
 printf("\n");
 }
}
//End function for printing

//Defining the function for norm

double linalg_norm(double **a, int m)
{
int i;
double norm=0.0;

 for(i=0;i<m;i++)
 {
norm = norm + a[i][0]*a[i][0];
}
return sqrt(norm);

}
//End function for norm

//Defining the function for difference of matrices

double **linalg_sub(double **a, double **b, int m, int n)
{
int i, j;
double **c;
c = createMat(m,n);

 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
c[i][j]= a[i][j]-b[i][j];
  }
 }
return c;

}
//End function for difference of matrices

//Defining the function for inverse of 2x2 matrix


double **linalg_inv(double **mat, int m)
{
double **c, det;
c = createMat(m,m);

det = mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];

c[0][0] = mat[1][1]/det;
c[0][1] = -mat[1][0]/det;
c[1][0] = -mat[0][1]/det;
c[1][1] = mat[0][0]/det;

return c;

}
// End  function for inverse of 2x2 matrix


//Defining the function for difference of matrices

double **matmul(double **a, double **b, int m, int n, int p)
{
int i, j, k;
double **c, temp =0;
c = createMat(m,p);

 for(i=0;i<m;i++)
 {
  for(k=0;k<p;k++)
  {
    for(j=0;j<n;j++)
    {
	temp= temp+a[i][j]*b[j][k];
    }
	c[i][k]=temp;
	temp = 0;
  }
 }
return c;

}
//End function for difference of matrices

//Defining the function for transpose of matrix

double **transpose(double **a,  int m, int n)
{
int i, j;
double **c;
//printf("I am here");
c = createMat(n,m);

 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
c[i][j]= a[j][i];
//  printf("%lf ",c[i][j]);
  }
 }
return c;

}
//End function for transpose of matrix

//Defining the function for generating uniform random numbers
void uniform(char *str, int len)
{
int i;
FILE *fp;

fp = fopen(str,"w");
//Generate numbers
for (i = 0; i < len; i++)
{
fprintf(fp,"%lf\n",(double)rand()/RAND_MAX);
}
fclose(fp);

}
//End function for generating uniform random numbers
//generating angles
void uniform2(char *str, int len)
{
int i;

FILE *fp;

fp = fopen(str,"w");
//Generate numbers
for (i = 0; i < len; i++)
{
fprintf(fp,"%lf\n",(double)rand()*(44.0/7.0)/RAND_MAX);
}
fclose(fp);

}
void uniform3(char *str, int len)
{
int i;

FILE *fp;
double nu=0.0;

fp = fopen(str,"w");
//Generate numbers
for (i = 0; i < len; i++)
{
nu=nu+(22.0/7.0)/50;
fprintf(fp,"%lf\n",nu);
}
fclose(fp);

}


void solsin(char *str,float value,int m,int n)
{
int i;
FILE*fp;
 double nu=0.0;
fp = fopen(str,"w");
for(i=m;i<n;i++)
{
nu=i*M_PI+pow(-1,i)*asin(value);
fprintf(fp,"%lf\n",nu);
}
fclose(fp);
}

void solcos(char *str,float value,int m,int n)
{
int i;
FILE*fp;
 double nu=0.0;
fp = fopen(str,"w");
for(i=m;i<n;i++)
{
nu=2*i*M_PI+acos(value);
fprintf(fp,"%lf\n",nu);
nu=2*i*M_PI-acos(value);
fprintf(fp,"%lf\n",nu);

}
fclose(fp);
}	

void solution(char *str1,char *str2,int n,int m,int p,double c)
{
int i;
int j;
FILE *fp1;
FILE *fp2;
 double x, temp=0.0,y1;
fp1 = fopen(str1,"r");
//get numbers from file
fp2=fopen(str2,"w");
for(i=0;i<n;i++)
{
//fscanf(fp1,"%lf",&x);
fscanf(fp1,"%lf",&x);
if (x<=c&&x>=-c)
{
y1=acos(x/c);
for(j=p;j<m;j++)
{
temp=2*j*M_PI+y1;
if (y1==0 && j==0)
{
fprintf(fp2,"%lf\n",temp);
}
else
{
	if(y1==0)
	fprintf(fp2,"%lf\n",temp);
	else
	{
	
temp=2*j*M_PI+y1;
fprintf(fp2,"%lf\n",temp);
temp=2*j*M_PI-y1;
fprintf(fp2,"%lf\n",temp);
}
}
}
}
}
fclose(fp2);
fclose(fp1);
}



void ascendingo(char *str1,char *str2,int n)
{

FILE *fp1;
FILE*fp2;
    fp1 = fopen(str1, "r");

    //read file into array
    //double numberArray[n];
    int i;
    double arr[n];
    

    for (i = 0; i < n; i++)
    {
        fscanf(fp1, "%lf", &arr[i]);
    }
    
    for ( i = 0; i < n; i++)                     //Loop for ascending ordering
	{
		for (int j = 0;j < n; j++)             //Loop for comparing other values
		{
			if (arr[j] > arr[i])                //Comparing other array elements
			{
				float tmp = arr[i];         //Using temporary variable for storing last value
				arr[i] = arr[j];            //replacing value
				arr[j] = tmp;    
		    } 
			
		}
	}
	fclose(fp1);
	fp2=fopen(str2,"w");
	for (int i = 0; i < n; i++)                     //Loop for printing array data after sorting
	{
		fprintf(fp2," %lf\n",arr[i]);
	}
    fclose(fp2);
}


double remove_repeated_elements(char*str1,char*str2, int n)
 {
	 FILE *fp1;
	 FILE*fp2;

    fp1 = fopen(str1, "r");

    //read file into array
    //double numberArray[n];
    int i,j;
    double a[n];
    for (i = 0; i < n; i++)
    {
        fscanf(fp1, "%lf", &a[i]);
    }
   fclose(fp1); 
   j = 0;
   fp2=fopen(str2,"w");
   // Removing repeated elements
   for (i = 1; i <n; i++)
   {
     if (a[i] != a[j])
     {
       j++;
       a[j] = a[i]; 
     }
   }
 
   // The new array size
   n = (j + 1);
 
   // Print new array
   
   for(i = 0; i< n; i++)
   {
      fprintf(fp2,"%lf \n", a[i]);
   }
  // Return the new size
   return(j + 1);
   fclose(fp2);
 }
 

//difference between adjacent elements

void difference(char*str1,char*str2,int n)
{
	FILE*fp1;
    FILE*fp2;
    fp1=fopen(str1,"r");
    double arr[n],j[n-1];
    int i;
    for (i = 0; i < n; i++)
    {
		fscanf(fp1, "%lf", &arr[i]);
	}
	fclose(fp1);
	fp2=fopen(str2,"w");
	for (i=0;i<n-1;i++)
	{
		j[i]=arr[i+1]-arr[i];
		
		
	}
	for (i=0;i<n-1;i++)
	{
		fprintf(fp2,"%lf\n",j[i]);
	}
	fclose(fp2);
}	

			
void mergingfiles(char*str1,int n1,char*str2,int n2,char*str3)
{
	FILE*fp1;
	FILE*fp2;
	FILE*fp3;
	int i;
	double s[n1+n2];
	
	fp1=fopen(str1,"r");
	fp2=fopen(str2,"r");
	for (i = 0; i < n1; i++)
    {
		fscanf(fp1, "%lf", &s[i]);
	}
	for (i = n1; i < n1+n2; i++)
    {
		fscanf(fp2, "%lf", &s[i]);
	}
	fp3=fopen(str3,"w");
	for (i=0;i<n1+n2;i++)
	{
		fprintf(fp3,"%lf\n",s[i]);
	}
fclose(fp1);
fclose(fp2);
fclose(fp3);
}	
	

		
		
		
	
	
		
		
	
					
			
		
	
		
		
		
		
		
	
	
	

	
		

  





	
	
	

	




    
 





//end generating angles
                      
//Defining the function for calculating the mean of random numbers
double mean(char *str,int len)
{
int i=0,c;
FILE *fp;
double x, temp=0.0;

fp = fopen(str,"r");
//get numbers from file
while(fscanf(fp,"%lf",&x)!=EOF)
{
//Count numbers in file
i=i+1;
//Add all numbers in file
temp = temp+x;
}
fclose(fp);
temp = temp/(i-1);
return temp;

}
//variance starts
double variance(char *str, int len)
{
int i;
double temp=0.0, var=0.0, x;

FILE *fp;

fp = fopen(str,"r");
//Generate line points
for (i = 0; i < len; i++)
{
//x=(double)rand()/RAND_MAX;
fscanf(fp,"%lf",&x);
temp=temp+x;
}
temp=temp/len;
for (i = 0; i < len; i++)
{
//x=(double)rand()/RAND_MAX;
fscanf(fp,"%lf",&x);
var = var + (temp-x)*(temp-x);
}
var=var/len;
fclose(fp);
return var;
}
//variance ends
//End function for calc////ulating the mean of random numbers

//Defining the function for generating Gaussian random numbers
void gaussian(char *str, int len)
{
int i,j;
double temp;
FILE *fp;

fp = fopen(str,"w");
//Generate numbers
for (i = 0; i < len; i++)
{
temp = 0;
for (j = 0; j < 12; j++)
{
temp += (double)rand()/RAND_MAX;
}
temp-=6;
fprintf(fp,"%lf\n",temp);
}
fclose(fp);

}
//End function for generating Gaussian random numbers

