#Vector Operations in R
vectorOperations <- function(){
  myVector <- c()
  for (i in 1:5) {
    myVector[i] <- as.integer(readline(prompt = "Enter the element: "))
  }
  print("The vector is: ")
  print(myVector)
  print(paste("Sum of the vector: ",sum(myVector)))
  print(paste("Product of the vector: ",prod(myVector)))
  print(paste("Mean of the vector: ",mean(myVector)))
}

vectorOperations()
