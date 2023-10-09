# -*- coding: utf-8 -*-
"""
Created on Fri Jul  3 21:38:24 2020

@author: RAKIB
"""

#Importing the liberaries
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
#Importing the Dataset
dataset = pd.read_csv("Position_Salaries.csv")
x = dataset.iloc[:,1:2].values
y = dataset.iloc[:, [2]].values
#Fitting DTR to the Dataset
from sklearn.tree import DecisionTreeRegressor
regressor = DecisionTreeRegressor(random_state = 0)
regressor.fit (x, y)
#Predicting a new result
y_pred = regressor.predict(6.5)
#Visualizing the DTR result
plt.scatter(x, y, color = 'red')
x_grid = np.arange(min(x),max(x), 0.01)
x_grid = x_grid.reshape(len(x_grid), 1)
plt.scatter(x, y, color = 'red')
plt.plot(x_grid, regressor.predict(x_grid), color = 'blue')
plt.title('Truth or Bluff(Decision Tree Regression)')
plt.xlabel('Position level')
plt.ylabel('Salary')
plt.show()

