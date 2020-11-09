Description
-----------

`remoteSTAR` is currently in early development. Organization is less
than ideal, official unit tests are not present, and C++ code has
occasionally exhibited bugs.

This package is not stable, consider it a beta. Please report any
comments or bugs either directly to me `morrow5@wisc.edu` or through
github:
<a href="https://github.com/morrowcj/remoteSTAR" class="uri">https://github.com/morrowcj/remoteSTAR</a>
(it is a private repo so please send me a github username and I’ll add
you to the repo).

Installation
------------

Currently to install this package, the best way is to install with the
`remoteSTAR_[version].tar.gz` file created with `R CMD check`.

Once a user has the tar.gz file they can install it with

    install.packages("remoteSTAR_[version].tar.gz", repos = NULL, type = "source")

and then load it with

    library(remoteSTAR)

from the R console.

Example usage
-------------

For examples on how to use `remoteSTAR` in it’s current state, see the
`Alaska` vignette by using the following R code:

    vignette("Alaska")

Planned Features
----------------

Since this package in developmental stages, there are many features that
are currently unimplemented. This section will keep track of the
features and design implementations that I plan to include or change in
the next version as well.

-   [ ] allow users to, optionally, input parameters (e.g. `r` and `a`
    in the exponential-power function) instead of fitting ML parameters.

-   [ ] add example for testing “is there an overall time trend” to the
    vignette

-   [ ] make providing distance matrix **optional** instead of required
    for `fitGLS.partition_rcpp()` and the partitioned method as a whole.

-   [ ] include parallelization and distributed comptuting options. If
    these are not natively implemented (i.e. using openMP in C++), then
    examples of how to make it work with other parallelization tools
    should be provided.

-   [ ] more explicit handling of missing data: “How should a constant
    time series be treated?”; “What happends if there is a missing data
    point within a single time series?”

-   [ ] possibly change the CLS function so that it reads 1 line of data
    at a time to save memory. Also, using `RcppEigen::fastLM()` may be
    better than `lm()` in terms of speed.

-   [ ] **Break up C++ functions into more than 1 file**

-   [ ] **WRITE TESTS FOR EVERY FUNCTION!!!**

-   [ ] update documentation for every function to include output format
    and example usage.

If there are any additional features that you would like to see
implemented, or bugs/issues that you ran into, please submit an issue on
github.
