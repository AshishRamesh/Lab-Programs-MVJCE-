#Importing the required module 
import matplotlib.pyplot as plt

x = [1,2,5,7,9,11]
y = [8,4,3,10,10,12]
plt.plot(x, y,'r+--') # plotting points
plt.xlabel('x-axis') # naiming the x axis 
plt.ylabel('y-axis') # naming the y axis 
plt.title('plotting Line') # giving title to graph 
plt.Show() # function to show plot
