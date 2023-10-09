# -*- coding: utf-8 -*-
"""
Created on Sun Aug 23 12:10:35 2020

@author: RAKIBUL SHARIF
"""
#Importing the Liberaries
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
#Importing the dataset
dataset = pd.read_csv('Beton.csv')
X = dataset.iloc[:, :-1].values
y = dataset.iloc[:, 1].values
#Splitting the dataset into training set and test set
from sklearn.cross_validation import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = 1/3, 
                                                    random_state = 0)
#Fitting Simple Linear Regression to the training set
from sklearn.linear_model import LinearRegression
regressor = LinearRegression()
regressor.fit(X_train, y_train)
#Predicting the Test result
y_pred = regressor.predict(X_test)
#Visualizing the Training set
plt.scatter(X_train, y_train, color = 'red')
plt.plot(X_train, regressor.predict(X_train), color = 'blue')
plt.title("Salary vs Experience(Training set)")
plt.xlabel("Years of Experience")
plt.ylabel("Salary")
plt.show()
#Visualizing the Test set 
plt.scatter(X_test, y_test, color = 'grey')
plt.plot(X_train, regressor.predict(X_train), color = 'green')
plt.title("Salary vs Experience(Training set)")
plt.xlabel("Years of Experience")
plt.ylabel("Salary")
plt.show()











