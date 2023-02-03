bubbleSort <- function()
{
  myVector <- c()
  for (i in 1:5){
    myVector[i] <- as.integer(readline())
  }
  print("Unsorted: ")
  print(myVector)
  swap_performed <- TRUE
  while(swap_performed){
    swap_performed <- FALSE
    for (i in 1:(length(myVector)-1)){
      if(myVector[i] > myVector[i+1])
      {
        temp<- myVector[i]
        myVector[i]<-myVector[i+1]
        myVector[i+1] <- temp
        swap_performed <- TRUE
      }
    }
  }
  print("Sorted")
  print(myVector)
}
bubbleSort()
