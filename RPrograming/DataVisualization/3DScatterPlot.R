#Plotting 3D scatterplot of mtcars

install.packages("scatterplot3d")
library("scatterplot3d")
data
#To change the labels use xlab, ylab, zlab
scatterplot3d(mtcars[,c("wt", "mpg", "disp")], xlab = "Weight", 
              ylab = "MPG", zlab = "Disp")
