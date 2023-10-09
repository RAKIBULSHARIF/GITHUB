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
y=dataset.iloc[:, 2].values
#Fitting Linear Regression to the dataset
from sklearn.linear_model import LinearRegression
lin_reg = LinearRegression()
lin_reg.fit (X, y)
#Fitting the Polynomial Regression to the Dataset
from sklearn.preprocessing import PolynomialFeatures
poly_reg = PolynomialFeatures(degree = 2)
X_poly = poly_reg.fit_transform(X)
lin_reg_2 = LinearRegression()
lin_reg_2.fit(X_poly, y)
#Visualizing the Linear Regression results
plt.scatter(X, y, color = 'red')
plt.plot(X , lin_reg.predict(X), color = 'blue')
plt.title('Truth or Bluff(Linear Regression)')
plt.xlabel('Position Level')
plt.ylabel('Salary')
plt.show()
#Visualizing the Polynomial Regression Results
X_grid = np.arange(min(X), max(X), 0.1)
X_grid = X_grid.reshape((len(X_grid), 1))
plt.scatter(X, y, color='green')
plt.plot(X_grid, lin_reg_2.predict(poly_reg.fit_transform(X_grid)),
         color = 'blue')
plt.title('Truth or Bluff(Polynomial)')
plt.xlabel('Position level')
plt.ylabel('Salary')
plt.show()
#Predicting a new result with Linear Regression
lin_reg.predict(6.5)
#Predicting a new result with Polynomial Regression
lin_reg_2.predict(poly_reg .fit_transform(6.5))
