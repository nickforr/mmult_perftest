
library(microbenchmark)
library(Rcpp)

# Create some large matrices
set.seed(1.234)
m1 <- matrix(rnorm(5000 * 71 * 150), ncol = 150)
m2 <- matrix(rnorm(150 * 1000), nrow = 150)

# Assess R performance
microbenchmark({
  rMatrix <- m1 %*% m2
}, times = 1)

# Assess RcppArmadillo performance
sourceCpp("arma_mmult.cpp")
microbenchmark({
  armaMatrix <- arma_mmult(m1, m2)
}, times = 1)





