#mosiac plot using wheat dataset 
#for mosiac plot convert the data into tabluar format using table
wheatdata <- read.table("wheat.csv", header = TRUE)
wheatdata <- table(wheatdata$area,wheatdata$compactness)
mosaicplot(wheatdata, xlab = "Area", ylab = "Compactness", 
           main = "Wheat Mosiac", color = TRUE)

#mosiac plot using mtcars
data <- table(mtcars$wt, mtcars$mpg)
mosaicplot(data, color = TRUE, xlab = "Weight", ylab = "MPG", 
           main = "Mosiac Plot")
