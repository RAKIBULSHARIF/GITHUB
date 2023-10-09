# -*- coding: utf-8 -*-
"""
Created on Fri Aug 21 07:19:24 2020

@author: RAKIBUL SHARIF
"""
#Importing the liberaries
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
#Importing the Dataset
dataset = pd.read_csv('Data.csv')
X = dataset.iloc[:, :-1].values
y = dataset.iloc[:, 3].values
#Taking care of missing data
from sklearn.preprocessing import Imputer
imputer = Imputer(missing_values ='NaN', strategy = 'mean', axis = 0)
imputer = imputer.fit(X[:, 1:3])
"""Column denoted as 1 to n+1. 1 is the start number and n is 
the last desire number of column"""
X[:, 1:3] = imputer.transform(X[:, 1:3])
"""Column denoted as 1 to n+1. 1 is the start number and n is 
the last desire number of column"""
#Encoding Categorical Data
from sklearn.preprocessing import LabelEncoder, OneHotEncoder
labelencoder_X = LabelEncoder()
X[:, 0] = labelencoder_X.fit_transform(X[:, 0])
onehotencoder = OneHotEncoder(categorical_features = [0])
X=onehotencoder.fit_transform(X).toarray()
y=labelencoder_X.fit_transform(y)
#Splitting data set into trainning set and test set
from sklearn.cross_validation import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = 0.2, 
                                                    random_state = 0)
#Feature Scaling
from sklearn.preprocessing import StandardScaler
sc_X = StandardScaler()
X_train = sc_X.fit_transform(X_train)
X_test = sc_X.transform(X_test)




