// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "remotePARTS_types.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// GLS_worker_cpp
List GLS_worker_cpp(const MapMatd& y, const MapMatd& X, const MapMatd& V, const MapMatd& X0, double nug_l, double nug_u, double nug_tol, bool save_xx, int threads);
RcppExport SEXP _remotePARTS_GLS_worker_cpp(SEXP ySEXP, SEXP XSEXP, SEXP VSEXP, SEXP X0SEXP, SEXP nug_lSEXP, SEXP nug_uSEXP, SEXP nug_tolSEXP, SEXP save_xxSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMatd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type X0(X0SEXP);
    Rcpp::traits::input_parameter< double >::type nug_l(nug_lSEXP);
    Rcpp::traits::input_parameter< double >::type nug_u(nug_uSEXP);
    Rcpp::traits::input_parameter< double >::type nug_tol(nug_tolSEXP);
    Rcpp::traits::input_parameter< bool >::type save_xx(save_xxSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(GLS_worker_cpp(y, X, V, X0, nug_l, nug_u, nug_tol, save_xx, threads));
    return rcpp_result_gen;
END_RCPP
}
// LogLikGLS_cpp
double LogLikGLS_cpp(double nugget, const MapMatd& X, const MapMatd& V, const MapMatd& y);
RcppExport SEXP _remotePARTS_LogLikGLS_cpp(SEXP nuggetSEXP, SEXP XSEXP, SEXP VSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type nugget(nuggetSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(LogLikGLS_cpp(nugget, X, V, y));
    return rcpp_result_gen;
END_RCPP
}
// crosspart_worker_cpp
List crosspart_worker_cpp(const MapMatd& xxi, const MapMatd& xxj, const MapMatd& xxi0, const MapMatd& xxj0, const MapMatd& tUinv_i, const MapMatd& tUinv_j, const MapMatd& Vsub, double nug_i, double nug_j, int df1, int df2);
RcppExport SEXP _remotePARTS_crosspart_worker_cpp(SEXP xxiSEXP, SEXP xxjSEXP, SEXP xxi0SEXP, SEXP xxj0SEXP, SEXP tUinv_iSEXP, SEXP tUinv_jSEXP, SEXP VsubSEXP, SEXP nug_iSEXP, SEXP nug_jSEXP, SEXP df1SEXP, SEXP df2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMatd& >::type xxi(xxiSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type xxj(xxjSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type xxi0(xxi0SEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type xxj0(xxj0SEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type tUinv_i(tUinv_iSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type tUinv_j(tUinv_jSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type Vsub(VsubSEXP);
    Rcpp::traits::input_parameter< double >::type nug_i(nug_iSEXP);
    Rcpp::traits::input_parameter< double >::type nug_j(nug_jSEXP);
    Rcpp::traits::input_parameter< int >::type df1(df1SEXP);
    Rcpp::traits::input_parameter< int >::type df2(df2SEXP);
    rcpp_result_gen = Rcpp::wrap(crosspart_worker_cpp(xxi, xxj, xxi0, xxj0, tUinv_i, tUinv_j, Vsub, nug_i, nug_j, df1, df2));
    return rcpp_result_gen;
END_RCPP
}
// fitGLS_cpp
List fitGLS_cpp(const MapMatd& X, const MapMatd& V, const MapMatd& y, const MapMatd& X0, double nugget, bool save_xx, int threads);
RcppExport SEXP _remotePARTS_fitGLS_cpp(SEXP XSEXP, SEXP VSEXP, SEXP ySEXP, SEXP X0SEXP, SEXP nuggetSEXP, SEXP save_xxSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMatd& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type X0(X0SEXP);
    Rcpp::traits::input_parameter< double >::type nugget(nuggetSEXP);
    Rcpp::traits::input_parameter< bool >::type save_xx(save_xxSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(fitGLS_cpp(X, V, y, X0, nugget, save_xx, threads));
    return rcpp_result_gen;
END_RCPP
}
// fitGLS2_cpp
void fitGLS2_cpp(List L, const MapMatd& X, const MapMatd& V, const MapMatd& y, const MapMatd& X0, double nugget, bool save_xx, bool LL_only, bool no_F, const int threads);
RcppExport SEXP _remotePARTS_fitGLS2_cpp(SEXP LSEXP, SEXP XSEXP, SEXP VSEXP, SEXP ySEXP, SEXP X0SEXP, SEXP nuggetSEXP, SEXP save_xxSEXP, SEXP LL_onlySEXP, SEXP no_FSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type L(LSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type X0(X0SEXP);
    Rcpp::traits::input_parameter< double >::type nugget(nuggetSEXP);
    Rcpp::traits::input_parameter< bool >::type save_xx(save_xxSEXP);
    Rcpp::traits::input_parameter< bool >::type LL_only(LL_onlySEXP);
    Rcpp::traits::input_parameter< bool >::type no_F(no_FSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    fitGLS2_cpp(L, X, V, y, X0, nugget, save_xx, LL_only, no_F, threads);
    return R_NilValue;
END_RCPP
}
// AtA
MatrixXd AtA(const MatrixXd& A);
RcppExport SEXP _remotePARTS_AtA(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MatrixXd& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(AtA(A));
    return rcpp_result_gen;
END_RCPP
}
// solve_cpp
MatrixXd solve_cpp(const MatrixXd& A, const MatrixXd& B);
RcppExport SEXP _remotePARTS_solve_cpp(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MatrixXd& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const MatrixXd& >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(solve_cpp(A, B));
    return rcpp_result_gen;
END_RCPP
}
// solve_ident_cpp
MatrixXd solve_ident_cpp(const MatrixXd& A);
RcppExport SEXP _remotePARTS_solve_ident_cpp(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MatrixXd& >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(solve_ident_cpp(A));
    return rcpp_result_gen;
END_RCPP
}
// invchol_cpp
MatrixXd invchol_cpp(const MapMatd& V, double nugget);
RcppExport SEXP _remotePARTS_invchol_cpp(SEXP VSEXP, SEXP nuggetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMatd& >::type V(VSEXP);
    Rcpp::traits::input_parameter< double >::type nugget(nuggetSEXP);
    rcpp_result_gen = Rcpp::wrap(invchol_cpp(V, nugget));
    return rcpp_result_gen;
END_RCPP
}
// optimize_nugget_cpp
double optimize_nugget_cpp(const MapMatd& X, const MapMatd& V, const MapMatd& y, double lower, double upper, double tol, bool debug);
RcppExport SEXP _remotePARTS_optimize_nugget_cpp(SEXP XSEXP, SEXP VSEXP, SEXP ySEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP tolSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMatd& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const MapMatd& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    rcpp_result_gen = Rcpp::wrap(optimize_nugget_cpp(X, V, y, lower, upper, tol, debug));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_remotePARTS_GLS_worker_cpp", (DL_FUNC) &_remotePARTS_GLS_worker_cpp, 9},
    {"_remotePARTS_LogLikGLS_cpp", (DL_FUNC) &_remotePARTS_LogLikGLS_cpp, 4},
    {"_remotePARTS_crosspart_worker_cpp", (DL_FUNC) &_remotePARTS_crosspart_worker_cpp, 11},
    {"_remotePARTS_fitGLS_cpp", (DL_FUNC) &_remotePARTS_fitGLS_cpp, 7},
    {"_remotePARTS_fitGLS2_cpp", (DL_FUNC) &_remotePARTS_fitGLS2_cpp, 10},
    {"_remotePARTS_AtA", (DL_FUNC) &_remotePARTS_AtA, 1},
    {"_remotePARTS_solve_cpp", (DL_FUNC) &_remotePARTS_solve_cpp, 2},
    {"_remotePARTS_solve_ident_cpp", (DL_FUNC) &_remotePARTS_solve_ident_cpp, 1},
    {"_remotePARTS_invchol_cpp", (DL_FUNC) &_remotePARTS_invchol_cpp, 2},
    {"_remotePARTS_optimize_nugget_cpp", (DL_FUNC) &_remotePARTS_optimize_nugget_cpp, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_remotePARTS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
