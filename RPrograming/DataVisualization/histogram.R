data <-  read.table("wheat.csv", header = TRUE)
hist(data$area, xlab = "Area", main = "Area Histogram", col = "blue")

#Using mtcars dataset
hist(mtcars$cyl, xlab = "No.of cylinders", main = "No.of Cylinders Histogram",
     col = "red")
