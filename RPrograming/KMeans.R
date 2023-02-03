install.packages("ggplot2")
install.packages("ggfortify")
library("ggplot2")
library("ggfortify")
library("dplyr")
library("stats")

#Collect the data on which the clustering has to be done
mydata <- iris[,1:4]

#kmeans function is used to make the K-Means model. The
#first argument is the dataset and the second argument is
#the number of clusters
KMmodel <- kmeans(mydata,2)

KMmodel

#To print the center of the clusters
KMmodel$centers

#Plot the data using the KMmodel. frame = TRUE to get the borders of the clusters
autoplot(KMmodel,mydata, frame = TRUE)

