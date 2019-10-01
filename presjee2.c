#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs2.h"

int main()
{
	

	
	//f'(x)=cos(pi*cosx)*pi*(-sinx)=0
	
	
solsin("sin0.dat",0,-2,4);//naming it as sin0.dat
solcos("cos0.dat",0,-1,5);
//Finding values of x using y values

solution("cos0.dat","df01.dat",10,2,-1,3.141593);
mergingfiles("sin0.dat",6,"df01.dat",12,"df0.dat");

//CHECKING POSSIBILITY OF ARITHMETIC PROGRESSION

//Arranging these values in an ascending order
ascendingo ("df0.dat","df0sort.dat",18);

//Removing the repeated values
remove_repeated_elements("df0sort.dat","df0sortnonrep.dat", 18);

difference("df0sortnonrep.dat","dfver.dat",18);


return 0;
}





