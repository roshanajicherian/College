#Plotting a scatter plot of Weight and mileage parameters of mtcars dataset

#To select data from columns wt and mpg
data <- mtcars[,c('wt','mpg')]

#xlim and ylim are used to set the range of the x and y axis
plot(x= data$wt, y= data$mpg, main = "Weight vs. Mileage", 
     xlab = "Weight", ylab = "Mileage", xlim = c(2,4), ylim = c(10,28))

