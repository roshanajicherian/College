colours <- c("red", "green", "blue", "orange", "pink", "yellow")
labels <- c("Housing","Food","Clothing","Entertainment","Others")
values <- c(600,300,150,100,200)

pie(values,labels, col= colours)

legend("topright", labels, fill = colours, cex = 0.8)
