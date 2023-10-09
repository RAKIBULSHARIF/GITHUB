# -*- coding: utf-8 -*-
"""
Created on Sat Jul  4 00:01:04 2020

@author: RAKIB
"""
#Importing the libereries
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
#Importing the Dataset
dataset = pd.read_csv("Position_Salaries.csv")
x = dataset.iloc[:,1:2].values
y = dataset.iloc[:, [2]].values
#Fiting RFR to the dataset
from sklearn.ensemble import RandomForestRegressor
regressor = RandomForestRegressor(n_estimators = 300, random_state = 0)
regressor.fit(x, y)
#Predicting a new result
y_pred = regressor.predict(6.5)
#Visualizing the RFR result
plt.scatter(x, y, color = 'red')
x_grid = np.arange( min(x), max(x), 0.01)
x_grid = x_grid.reshape(len(x_grid), 1)
plt.scatter(x, y, color = 'red')
plt.plot(x_grid, regressor.predict(x_grid), color = 'blue')
plt.title('Truth or Bluff(Decision Tree Regression)')
plt.xlabel('Position_level')
plt.ylabel('Salary')
plt.show()