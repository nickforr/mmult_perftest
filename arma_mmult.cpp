#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]
// [[Rcpp::plugins("cpp11")]]
using namespace Rcpp;

// [[Rcpp::export]]
arma::mat arma_mmult(arma::mat matrix1, arma::mat matrix2) {
  
}

// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
set.seed(1.23)
a <- matrix(rnorm(1000), ncol = 20)
b <- matrix(rnorm(1000), nrow = 20)
arma_mmult(a, b)
*/
