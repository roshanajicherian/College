install.packages("randomForest")
library("dplyr")
library("stats")
library("randomForest")

mydata <- iris
mydata


index <-  sample(c(1,2), nrow(mydata), replace = TRUE, prob = c(0.3,0.5))
trainingdata <- mydata[index==1,]
testingdata <- mydata[index==2,]
trainingdata
testingdata


model <- randomForest(Species~.,data = trainingdata)

testingdata$Species_predict <- predict(model,testingdata)
CFM <- table(testingdata$Species,testingdata$Species_predict)
plot(CFM)

accuracy<- sum(diag(CFM)/sum(CFM))
accuracy
