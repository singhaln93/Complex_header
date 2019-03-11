/**
 * @file Complex.h
 * @author Neeraj Singhal
 * @brief 10292018_spfp_scdft_512s
 * @version 1.0
 * @date 2018-10-29
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

    public:
    void operator=(const Complex &a);
}Complex;

//Complex init(float real, float imag);
Complex operator+(Complex a, Complex b);
//struct Complex* addComplex(Complex *a, Complex *b);

Complex operator-(Complex a, Complex b);
//struct Complex* subComplex(Complex *a, Complex *b);

Complex operator*(Complex a, Complex b);
//struct Complex* mulComplex(Complex *a, Complex *b)

//Complex polar2rectform(float r, float angle);   //r<O->a+ib
//void rect2polarform(Complex a);                 //a+ib->r<O
//Complex cexp(float real, float imag);           //e^(a+ib)
Complex cexp1(float real, float imag);           //e^(a+ib)
#endif
