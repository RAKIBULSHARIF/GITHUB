# -*- coding: utf-8 -*-
"""
Created on Mon Jul 20 20:19:20 2020

@author: RAKIB
"""

#Importing the Liberaries
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
#Importing the Dataset
dataset = pd.read_csv("Shoppers.csv")
x = dataset.iloc[:, [3, 4]].values
#y = dataset.iloc[:, 4].values
#Using the dendrogram to find the optimal number of clusters
import scipy.cluster.hierarchy as sch
dendrogram = sch.dendrogram(sch.linkage(x, method = 'ward'))
plt.title('Dendrogram')
plt.xlabel('Customers')
plt.ylabel('Euclidean distances')
plt.show()
#Fitting hierarchical Clustering to the dataset
from sklearn.cluster import AgglomerativeClustering
hc = AgglomerativeClustering(n_clusters = 5, affinity = 'euclidean', linkage = 'ward')
y_hc = hc.fit_predict(x)
#Visualizing the clusters
plt.scatter(x[y_hc == 0,0],x[y_hc == 0,1], s = 100, c = 'red', label = 'Clusters 1')
plt.scatter(x[y_hc == 1,0],x[y_hc == 1,1], s = 100, c = 'blue', label = 'Clusters 2')
plt.scatter(x[y_hc == 2,0],x[y_hc == 2,1], s = 100, c = 'green', label = 'Clusters 3')
plt.scatter(x[y_hc == 3,0],x[y_hc == 3,1], s = 100, c = 'cyan', label = 'Clusters 4')
plt.scatter(x[y_hc == 4,0],x[y_hc == 4,1], s = 100, c = 'magenta', label = 'Clusters 5')
plt.title('Clusters of customers')
plt.xlabel('Annual Income (k$)')
plt.ylabel('Spending Score (1-100)')
plt.legend()
plt.show()