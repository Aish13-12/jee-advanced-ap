#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs2.h"


int main()
{
	
ascendingo ("cosr.dat","ascending0.dat",10);
ascendingo ("sol2.dat","ascendingo2.dat",16);



remove_repeated_elements("ascendingo2.dat","aish.dat", 10);
remove_repeated_elements("ascending0.dat","aish2.dat", 10);

//difference("test.dat","final1.dat",10);
difference("f(x)0sortnonrep.dat","final1.dat",9);


return 0;


}
