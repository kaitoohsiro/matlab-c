#include <mex.h>

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray* prhs[])
{
    int   i = 0;
    double sum = 0;

    /* 引数の個数確認 */
    if (nrhs <= 0)
    {
        mexErrMsgTxt("引数がありません。");
    }

    /* 返値の個数確認 */
    if (nlhs != 1)
    {
        mexErrMsgTxt("返値がありません。");
    }

    /* 引数の個数だけ繰り返し */
    for( i = 0; i <= 1000000000; i++ ) {}

    /* 引数を加算して返値にする */
    plhs[0] = mxCreateDoubleScalar(i);
}