factorialFunction <- function(n){
  res <- 1
  if(n ==1 || n==0)
    print(res)
  else{
    for (i in 1:n) {
      res <- res*i
    }
    print(res)
  }
}
factorialFunction(5)
