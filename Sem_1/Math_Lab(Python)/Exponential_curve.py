# importing the required module 
import numpy as np 
import matplotlib.pyplot as plt

x = np.arange(-10, 10,0.001) # x takes the values 
y = np.exp(x) # exponential function 
plt.plot(x,y) # plotting the points
plt.title("`& xponential curve") # giving a title to my graph 
plt.grid() # displaying the grid 
plt.show() # shows the plot
