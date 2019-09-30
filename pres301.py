import numpy as np
import matplotlib.pyplot as plt
import math

len=100
theta=np.linspace(0,2*np.pi,len)
y1 = np.zeros((2,len))
y1[0,:] = theta

y1[1,:] = np.sin(np.pi*np.cos(theta))



A=np.array([0,0])
B=np.array([2*np.pi,0])
C=np.array([np.pi/2,0])
D=np.array([np.pi,0])
E=np.array([3*np.pi/2,0])



plt.plot(y1[0,:],y1[1,:],label='X')


plt.plot(A[0], A[1], 'o')
plt.text(A[0] * (1 - 0.1), A[1] * (1 + 0.1) , '0')

plt.plot(B[0], B[1], 'o')
plt.text(B[0] * (1 - 0.08), B[1] * (1 + 0.1) , '2π')

plt.plot(C[0], C[1], 'o')
plt.text(C[0] * (1 - 0.2), C[1] * (1 + 0.1) , 'π/2')

plt.plot(D[0], D[1], 'o')
plt.text(D[0] * (1 - 0.1), D[1] * (1 + 0.1) , 'π')

plt.plot(E[0], E[1], 'o')
plt.text(E[0] * (1 - 0.1), E[1] * (1 + 0.1) , '3π/2')


plt.axis('equal')

plt.xlabel('$x (theta) $');plt.ylabel('$y$')

plt.legend(loc='best')

plt.grid()
plt.show()



