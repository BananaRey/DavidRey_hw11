import numpy as np
import matplotlib.pyplot as plt

archivo=np.loadtxt('tray.txt')

x=archivo[:,0]
v=archivo[:,1]
t=archivo[:,2]

plt.plot(t,x)
plt.title('x VS t',fontsize=25)
plt.xlabel('t',fontsize=25)
plt.ylabel('x',fontsize=25)
plt.savefig('pos.png')
plt.close()

plt.plot(t,v)
plt.title('v VS t',fontsize=25)
plt.xlabel('t',fontsize=25)
plt.ylabel('v',fontsize=25)
plt.savefig('vel.png')
plt.close()

plt.plot(x,v)
plt.title('v VS x',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('v',fontsize=25)
plt.savefig('phase.png')
plt.close()
