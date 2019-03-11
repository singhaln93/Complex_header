/**
 * @file Complex.h
 * @author Neeraj Singhal
 * @brief 01262019_spfp_dft_matrix_512s
 * @version 1.0
 * @date 2019-01-26
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <math.h>

//#include "MSPMATHLIB.h"
#define PI  3.1415926535897932


typedef struct Complex
{
    float real;
    float imag;

}Complex;

Complex init(float real, float imag);
Complex add(Complex a, Complex b);
Complex sub(Complex a, Complex b);
Complex mul(Complex a, Complex b);
Complex polar2rectform(float r, float angle);   //r<O->a+ib
void rect2polarform(Complex a);                 //a+ib->r<O
Complex cexp(float real, float imag);           //e^(a+ib)
Complex cexp1(float real, float imag);           //e^(a+ib)


#endif
