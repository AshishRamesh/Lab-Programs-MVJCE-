#importing the required module 
import numpy as np 
import matplotlib.pyplot as plt

x= np.arange(-10, 10,0.001)
y1 = np.sin(x)
y2 = np.cos(x)
plt.plot(x,y1,x,y2)
plt.title("Sine curve and cosine curve") 
plt.xlabel("Values of x")
plt.ylabel("values of Sin (I) and Cos (20)") 
plt.grid()
plt.show()
