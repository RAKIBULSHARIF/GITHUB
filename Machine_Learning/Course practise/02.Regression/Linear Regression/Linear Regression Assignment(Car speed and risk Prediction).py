"""
Spyder Editor

This is a temporary script file.
"""
#Importing Libereries
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
#Importing The Dataset
dataset = pd.read_csv('car driving risk analysis.csv')
X = dataset[['speed']]
y = dataset['risk']
#Splitting the dataset into test and train
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = .30, 
                                                    random_state = 0)
#Linear Model Regression
from sklearn.linear_model import LinearRegression
regressor = LinearRegression()
regressor.fit(X_train, y_train)
regressor.score(X_test, y_test)
#Predicting testing result
y_pred = regressor.predict(X_test)
#Plot The Whole set
plt.scatter(dataset['speed'],dataset['risk'])
plt.title('Car Speed and Risk Factor')
plt.xlabel('Car Speed in KMH')
plt.ylabel('Risk in percentage')
plt.show()
#Plot the training set
plt.scatter(X_train, y_train, color = 'green')
plt.plot(X_train, regressor.predict(X_train), color = 'blue')
plt.title('Car Speed and Risk Factor')
plt.xlabel('Car Speed in KMH')
plt.ylabel('Risk in percentage')
plt.show()
#Plot the test set
plt.scatter(X_test, y_test, color = 'green')
plt.plot(X_train, regressor.predict(X_train), color = 'red')
plt.title('Car Speed and Risk Factor')
plt.xlabel('Car Speed in KMH')
plt.ylabel('Risk in percentage')
plt.show()