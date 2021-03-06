
<!-- README.md is generated from README.Rmd. Please edit that file -->

# fastcats

Fast categorization of data using sets of category members

<!-- badges: start -->

[![Travis](https://travis-ci.org/jackwasey/fastcats.svg?branch=master)](https://travis-ci.org/jackwasey/fastcats)
[![AppVeyor](https://ci.appveyor.com/api/projects/status/github/jackwasey/fastcats?branch=master&svg=true)](https://ci.appveyor.com/project/jackwasey/fastcats)
<!-- badges: end -->

Using data from one or more columns of input, fastcats assigns a
category to each row, using a map. The originating use was to find which
type of disease each patient had, based on diagnostic codes. The map is
a named list, each containing values belonging to the named category. In
the disease example, the map might include an element for heart disease,
containing a set of relevant diagnostic codes. For each row of data, the
data in the chosen input column or columns are sought in each set in the
map. The output is a logical matrix or data frame. With the medical
example, each patient is flagged as having, or not having, heart
disease, cancer, etc., according to the sets of codes defined in the
map.

## Installation

You can install the released version of fastcats from
[CRAN](https://CRAN.R-project.org) with:

``` r
# when on CRAN
install.packages("fastcats")

# until then, or for development version
remotes::install_github("jackwasey/fastcats")
```
