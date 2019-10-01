#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs2.h"

int main()
{
	
	//int n;
	
	//f(x)=sin(pi*cosx)=0
	//Finding values of y at which sin(y)=0,where y=pi*cosx
	
solsin("sin0.dat",0,-3,5);//naming it as sin0.dat
//Finding values of x using y values

solution("sin0.dat","f0.dat",10,2,0,3.141593);

//CHECKING POSSIBILITY OF ARITHMETIC PROGRESSION

//Arranging these values in an ascending order
ascendingo ("f0.dat","f0sort.dat",10);

//Removing the repeated values
remove_repeated_elements("f0sort.dat","f0sortnonrep.dat", 10);

//Finding the number of elements in the final solution file(in terminal)




//Finding the difference between the adjacent elements

difference("f0sortnonrep.dat","f0ver.dat",9);




return 0;
}




