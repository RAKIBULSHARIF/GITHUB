# -*- coding: utf-8 -*-
"""
Created on Wed Jun 24 22:51:28 2020

@author: RAKIB
"""
# Impoting the Liberaries
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
#Import the Dataset
dataset=pd.read_csv('Position_Salaries.csv')
X=dataset.iloc[:,1:2].values
y=dataset.iloc[:, [2]].values
#Feature Scaling
from sklearn.preprocessing import StandardScaler
sc_X = StandardScaler()
sc_y = StandardScaler()
X = sc_X.fit_transform(X)
y = sc_y.fit_transform(y)
#Fitting SVR to the Dataset
from sklearn.svm import SVR
regressor = SVR(kernel='rbf')
regressor.fit(X,y)
#Predicting a new result
y_pred = regressor.predict(6.5) 
#Visualizing the SVR result
plt.scatter(X, y, color = 'red')
plt.plot(X, regressor.predict(X), color = 'blue')
plt.title('Truth or Bluff(SVR)')
plt.xlabel('Position level')
plt.ylabel('Salary')
plt.show()












