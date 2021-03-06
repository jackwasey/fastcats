// [[Rcpp::depends(RcppEigen)]]
#include "fastcats_types.h"
#include "local.h"
#include "mapplus.h"
#include "refactor.h"
#include "relevant.h"

using namespace Rcpp;

// # nocov start
#ifdef FASTCATS_DEBUG
void printCornerMap(DenseMap x);
void printCornerSparse(PtsSparse x);
#define PRINTCORNERMAP(x)    \
  Rcpp::Rcout << #x << ": "; \
  printCornerMap(x);
#define PRINTCORNERSP(x)     \
  Rcpp::Rcout << #x << ": "; \
  printCornerSparse(x);
#define FASTCATS_ASSIGN(row, col) mat(row, col) = true; // bounds check
#else
#define PRINTCORNERMAP(x) ((void)0);
#define PRINTCORNERSP(x) ((void)0);
#define FASTCATS_ASSIGN(row, col) mat.coeffRef(row, col) = true;
#endif
// # nocov end

void buildVisitCodesSparseWide(
  const DataFrame &data,
  const std::string id_name,
  const CV code_names,
  const bool validate,
  Relevant &rh,
  // output
  PtsSparse &visMat,
  // output: can get this from sparse matrix at end? Needed?
  VecStr &visitIds);
LogicalMatrix matMulWide(const DataFrame &data,
                         const List &map,
                         const std::string id_name,
                         const CV code_name,
                         const bool validate = false);
