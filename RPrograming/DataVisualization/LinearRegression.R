install.packages("dplyr")
install.packages("MLmetrics")
install.packages("stats")
library("dplyr")
library("MLmetrics")
library("stats")
iris
#Step 1: Discarding unwanted data from the iris data set to perfrom refression
mydata <- iris[,1:4]

#Step 2: Obtain summary stats: use summary and cor
summary(mydata)
cor(mydata)

#Step 3: Creating training and testing dataset using the sample function.
#Use sample function to create a list of 1s and 2s. All the data which 
#corresponds to 1 will be added to the training dataset and all the data
#which corresponds to 2 will be added to testing data.
#Sampleing with replacemtn is done over here.
#refer: https://www.statology.org/train-test-split-r/

index <- sample(c(1,2),nrow(mydata), replace = TRUE, prob = c(0.2,0.3))
trainingdata <- mydata[index==1,]
testingdata <- mydata[index==2,]

#Step 4: Make the model using the lm function
# dependentVariable~independentVariable is the first argument
regressionModel <- lm(Sepal.Length~Sepal.Width,data = trainingdata)

#Step 5: Apply testing data on the regression model
#Use the predict function for this. Add the predicted data to the testing 
#data set to predict error in the next step
testingdata$Sepal.Length_predicted <- predict(regressionModel,testingdata)

#Step 6: Find the error between the predicted and actual values
#MAPE is used. It calauate the percentage error
#MAPE(Predicted, Actual)
MAPE(testingdata$Sepal.Length_predicted,testingdata$Sepal.Length)
