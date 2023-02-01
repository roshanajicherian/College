install.packages("randomForest")
library("dplyr")
library("stats")
library("randomForest")

mydata <- iris[,1:4]
mydata

summary(mydata)
cor(mydata)

index <-  sample(c(1,2), nrow(mydata), replace = TRUE, prob = c(0.3,0.5))
trainingdata <- mydata[index==1,]
testingdata <- mydata[index==2,]
trainingdata
testingdata


model <- randomForest()

?randomForest
